var numeric = require("numeric");

function print(name, m) {
  console.log("===================="+name+"=======================");
  console.log(numeric.prettyPrint(m));
}

var A = [[1,2,3],[3,2,2],[4,3,5]];
print("A", A);

var iA = numeric.inv(A);
print("iA", iA);

var AiA = numeric.dot(A, iA);
print("A*iA", AiA);