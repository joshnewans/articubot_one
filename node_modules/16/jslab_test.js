var J = require("./jslab");
var C = console;

var A = [[1,2,3],[3,2,2],[4,3,5]];
C.log("A=\n", J.str(A));

var iA = J.inv(A);
C.log("iA=\n", J.str(iA));

var AiA = J.dot(A, iA);
C.log("A*iA=\n", J.str(AiA));