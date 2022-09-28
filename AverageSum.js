function plusMinus(arr) {
  // Write your code here
  // hackerrank challenge
  //   initialising variables
  let plus = 0,
    minus = 0,
    zero = 0;
  // for loop to loop through the length of the array
  for (let i = 0; i < arr.length; i++) {
    // conditionals to compare an increament variables
    if (arr[i] == 0) {
      zero++;
    } else if (arr[i] < 0) {
      minus++;
    } else {
      plus++;
    }
  }
  //   this section just logs the averages since forEach method returns nothing.
  // the array that i ran forEach on is the individual averagees of plus and minus
  [plus / arr.length, minus / arr.length, zero / arr.length].forEach((item) =>
    console.log(item)
  );
}

plusMinus([1, 1, 0, -1, -1]);
