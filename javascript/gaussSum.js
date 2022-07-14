const gaussSum = (n) => {
  return (n * (n + 1)) / 2;
}

const normalSum = (n) => {
  let sum = 0;
  for (let i = 0; i <= n; i++)
    sum += i;
  
  return sum;
}

console.log(gaussSum(100));
console.log(normalSum(100));

console.log(gaussSum(1));
console.log(normalSum(1));
