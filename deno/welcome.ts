const fibonacci = (num: number): number =>
  num <= 2 ? 1 : fibonacci(num - 1) + fibonacci(num - 2)

console.time('fib')
const rett = fibonacci(45)
console.log(rett)
console.timeEnd('fib')