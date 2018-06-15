//reverse a string in place - got this on a whiteboard interview recently


//this function works if the string is all one word
function reverseStringInPlace(stringToReverse) {
  let originalString = stringToReverse;
  stringToReverse = stringToReverse.split('');
  let temp = null;
  for (let i = 0; i < Math.floor(stringToReverse.length / 2); i++) {
    let reverseIndex = stringToReverse.length- (i + 1);
    if (stringToReverse[reverseIndex]) {
      temp = stringToReverse[reverseIndex];
      stringToReverse[reverseIndex] = stringToReverse[i];
      stringToReverse[i] = temp;
    }
  }

  stringToReverse = stringToReverse.join('');
  return stringToReverse + " ";
}


//for reverse a string with mulitple words in it
function reverseStringSentence(someSentence) {
  let resultString = ''
  if (someSentence.includes(' ')) {
    someSentence = someSentence.split(' ');
    for (let i = 0; i < someSentence.length; i++) {
      resultString += reverseStringInPlace(someSentence[i])
    }
  } else {
    resultString = reverseStringInPlace(someSentence)
  }
  return resultString;
}


console.log(reverseStringSentence(process.argv[2]))
