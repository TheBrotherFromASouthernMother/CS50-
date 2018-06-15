function isPrime(n) {
  if (n === 1 || n === 2 || n === 3 || n === 5 || n === 7) {
    return true;
  } else if (n % 2 === 0 || n % 3 === 0 || n % 5 === 0) {
    return false;
  }
 let i = 5
 let step = 2

 while (i * i <= n) {
     if (n % i == 0) {
       return false
     }
     i += step
     step = 6 - step
  }

 return true
}

function printPrimes(numberOfPrimes = 3) {
  let i = 0;
  let number = 0;
  while (i < numberOfPrimes) {
    if (isPrime(number)) {
      console.log(number, true);
      i ++;
    }
    number ++;
  }
}


printPrimes(70);
