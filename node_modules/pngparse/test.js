var assert = require("chai").assert,
    fs     = require("fs"),
    path   = require("path"),
    png    = require("./index")

describe("PNG", function() {
  describe("parseStream", function() {
    /* FIXME: Technically, this is tested through all of the other methods, but
     * it would be nice to forcibly ensure that it works. One simple way would
     * be just to mock parseStream in calls to parseFile and parseBuffer,
     * making sure that parseStream gets called. */
  })

  describe("parseFile", function() {
    it("should error out if given a nonexistent file", function(done) {
      return png.parseFile(path.join(__dirname, "data/nonexist.png"), function(err) {
        assert.instanceOf(err, Error)
        done()
      })
    })

    it("should correctly parse an 1-bit colormap png", function(done) {
      return png.parseFile(path.join(__dirname, "data/1bit.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 1024);
        assert.equal(id.height, 1024);
        assert.equal(id.channels, 1);
        assert.equal(id.data.length, 1024 * 1024);
        assert.equal(id.trailer.length, 0);

        var y = 1024,
            x;

        while(y--) {
          x = 1024;
          while(x--)
            assert.equal(id.getPixel(x, y), 0x000000FF);
        }

        done();
      });
    });

    it("should correctly parse an 8-bit grayscale png", function(done) {
      return png.parseFile(path.join(__dirname, "data/grayscale.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 16);
        assert.equal(id.height, 16);
        assert.equal(id.channels, 1);
        assert.equal(id.data.length, 16 * 16);
        assert.equal(id.trailer.toString(), "Hello, world!\n");

        var y = 16,
            x

        while(y--) {
          x = 16
          while(x--)
            assert.equal(id.getPixel(x, y), (x ^ y) * 286331136 + 255)
        }

        done()
      })
    })

    it("should correctly parse an 8-bit truecolor png", function(done) {
      return png.parseFile(path.join(__dirname, "data/truecolor.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 16);
        assert.equal(id.height, 16);
        assert.equal(id.channels, 3);
        assert.equal(id.data.length, 16 * 16 * 3);
        assert.equal(id.trailer.length, 0);

        var y = 16,
            x

        while(y--) {
          x = 16
          while(x--)
            assert.equal(
              id.getPixel(x, y),
              x * 285212672 + y * 1114112 + (x ^ y) * 4352 + 255
            )
        }

        done()
      })
    })

    it("should correctly parse an 8-bit truecolor png with alpha", function(done) {
      return png.parseFile(path.join(__dirname, "data/truecoloralpha.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 16);
        assert.equal(id.height, 16);
        assert.equal(id.channels, 4);
        assert.equal(id.data.length, 16 * 16 * 4);
        assert.equal(id.trailer.length, 0);

        var y = 16,
            x

        while(y--) {
          x = 16
          while(x--)
            assert.equal(
              id.getPixel(x, y),
              x * 285212672 + y * 1114112 + (x ^ y) * 17
            )
        }

        done()
      })
    })

    it("should correctly read image with scanline filter", function(done) {
      return png.parseFile(path.join(__dirname, "data/accum.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 1024);
        assert.equal(id.height, 1024);
        assert.equal(id.channels, 3);
        assert.equal(id.data.length, 1024 * 1024 * 3);
        assert.equal(id.trailer.length, 0);

        assert.equal(id.getPixel(  0,   0), 0xFF0000FF)
        assert.equal(id.getPixel(  1,   0), 0xFF0000FF)
        assert.equal(id.getPixel(420, 308), 0xFF0029FF)
        assert.equal(id.getPixel(433, 308), 0x0A299DFF)
        assert.equal(id.getPixel(513, 308), 0x0066FFFF)
        assert.equal(id.getPixel(728, 552), 0xFF0047FF)

        done()
      })
    })

    it("should correctly read an indexed color image", function(done) {
      return png.parseFile(path.join(__dirname, "data/indexed.png"), function(err, id) {
        assert.isUndefined(err)
        assert.equal(id.width, 16);
        assert.equal(id.height, 16);
        assert.equal(id.channels, 3);
        assert.equal(id.data.length, 16 * 16 * 3);
        assert.equal(id.trailer.length, 0);

        var y = 16,
            x

        while(y--) {
          x = 16
          while(x--)
            if(x + y < 8)
              assert.equal(id.getPixel(x, y), 0xFF0000FF)

            else if(x + y < 16)
              assert.equal(id.getPixel(x, y), 0x00FF00FF)

            else if(x + y < 24)
              assert.equal(id.getPixel(x, y), 0x0000FFFF)

            else
              assert.equal(id.getPixel(x, y), 0x000000FF)
        }

        done()
      })
    })

    it("should correctly read an indexed color image with alpha", function(done) {
      return png.parseFile(path.join(__dirname, "data/indexedalpha.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 16);
        assert.equal(id.height, 16);
        assert.equal(id.channels, 4);
        assert.equal(id.data.length, 16 * 16 * 4);
        assert.equal(id.trailer.length, 0);

        var y = 16,
            x

        while(y--) {
          x = 16
          while(x--)
            if(x >= 4 && x < 12)
              assert.equal(id.getPixel(x, y), 0x00000000)

            else if(x + y < 8)
              assert.equal(id.getPixel(x, y), 0xFF0000FF)

            else if(x + y < 16)
              assert.equal(id.getPixel(x, y), 0x00FF00FF)

            else if(x + y < 24)
              assert.equal(id.getPixel(x, y), 0x0000FFFF)

            else
              assert.equal(id.getPixel(x, y), 0x000000FF)
        }

        done()
      })
    })

    it("should correctly support crazily-filtered images", function(done) {
      return png.parseFile(path.join(__dirname, "data/paeth.png"), function(err, id) {
        assert.isUndefined(err);
        assert.equal(id.width, 512);
        assert.equal(id.height, 512);
        assert.equal(id.channels, 4);
        assert.equal(id.data.length, 512 * 512 * 4);

        assert.equal(id.getPixel(  0,   0), 0xFF000000)
        assert.equal(id.getPixel(  1,   0), 0xFF000000)
        assert.equal(id.getPixel(  0,   1), 0xFF000000)
        assert.equal(id.getPixel(  2,   2), 0xFF000000)
        assert.equal(id.getPixel(  0,  50), 0xFF000000)
        assert.equal(id.getPixel(219, 248), 0xFF000D00)
        assert.equal(id.getPixel(220, 248), 0xFF000D00)
        assert.equal(id.getPixel(215, 249), 0xFF000C00)
        assert.equal(id.getPixel(216, 249), 0xFF000C00)
        assert.equal(id.getPixel(217, 249), 0xFF000D00)
        assert.equal(id.getPixel(218, 249), 0xFF000D00)
        assert.equal(id.getPixel(219, 249), 0xFF000E00)
        assert.equal(id.getPixel(220, 249), 0xFF000E00)
        assert.equal(id.getPixel(263, 319), 0xFF002100)
        assert.equal(id.getPixel(145, 318), 0x05535A00)
        assert.equal(id.getPixel(395, 286), 0x0007FF00)
        assert.equal(id.getPixel(152, 167), 0x052C3500)
        assert.equal(id.getPixel(153, 167), 0x04303600)
        assert.equal(id.getPixel(154, 167), 0x042F3700)
        assert.equal(id.getPixel(100, 168), 0xFF000400)
        assert.equal(id.getPixel(120, 168), 0xFF000900)
        assert.equal(id.getPixel(140, 168), 0xFF001B00)
        assert.equal(id.getPixel(150, 168), 0x05313600)
        assert.equal(id.getPixel(152, 168), 0x04343C00)
        assert.equal(id.getPixel(153, 168), 0x03343F00)
        assert.equal(id.getPixel(154, 168), 0x03344100)
        assert.equal(id.getPixel(155, 168), 0x02344300)
        assert.equal(id.getPixel(156, 168), 0x02314400)
        assert.equal(id.getPixel(157, 168), 0x02323F00)
        assert.equal(id.getPixel(158, 168), 0x03313900)

        done()
      })
    })
  })

  describe("parseBuffer", function() {
    it("should bail with an error given an invalid PNG", function(done) {
      var buf = new Buffer("I AM NOT ACTUALLY A PNG", "utf8")

      return png.parseBuffer(buf, function(err) {
        assert.instanceOf(err, Error)
        done()
      })
    })

    it("should return an error if a PNG is normal except for a missing IEND", function(done) {
      var buf = new Buffer("89504e470d0a1a0a0000000d49484452000000100000001008000000003a98a0bd000000017352474200aece1ce90000002174455874536f6674776172650047726170686963436f6e7665727465722028496e74656c297787fa190000008849444154789c448e4111c020100363010b58c00216b080052c60010b58c0c259c00216ae4d3b69df99dd0d1062caa5b63ee6b27d1c012996dceae86b6ef38398106acb65ae3e8edbbef780564b5e73743fdb409e1ef2f4803c3de4e901797ac8d3f3f0f490a7077ffffd03f5f507eaeb0fd4d71fa8af3f505f7fa0befe7c7dfdb9000000ffff0300c0fd7f8179301408", "hex")

      return png.parseBuffer(buf, function(err) {
        assert.instanceOf(err, Error)
        done()
      })
    })
  })
})
