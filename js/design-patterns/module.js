
// module.js

const Counter = (function () {

  let count = 0;

  return {
    increment() {
      count++;
      console.log(count);
    },

    decrement() {
      count--;
      console.log(count);
    }
  }

})();

Counter.increment();
Counter.increment();
Counter.decrement();
