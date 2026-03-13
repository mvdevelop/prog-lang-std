
// decorator.js

function logger(fn) {
  return function (...args) {
    console.log("Executando função...");
    return fn(...args);
  };
}

function soma(a, b) {
  return a + b;
}

const somaComLog = logger(soma);

console.log(somaComLog(2, 3));
