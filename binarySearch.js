let sortedArray = [1, 3, 5, 7, 8, 9, 10, 22, 77, 89];

function binarySearch(arr, target) {
  let max = arr.length -1;
  let min = 0;
  let guess;
  let numberOfGuesses = 0;
  while (guess != target) {
    guess = Math.floor((max + min) / 2);
    numberOfGuesses ++;
    if (arr[guess] === target) {
      break;
    } else if (arr[guess] > target) {
      max = guess;
    } else if (arr[guess] < target) {
      min = guess;
    }
    if (max < min) {
      return "target not found in dataset. Number of guesses: " + String(numberOfGuesses);
    }
  }
  return "target found at index " + guess + " after " + numberOfGuesses + " guesses"
}

console.log(binarySearch(sortedArray, Number(process.argv[2])));
