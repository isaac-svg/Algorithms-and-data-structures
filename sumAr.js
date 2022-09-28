let array = [1, 2, 3, 4, 5];
let newArr = [];

function arr() {
  array.forEach((number, index) => {
    let reducedArray = array.filter(
      (list, filterIndex) => filterIndex != index
    );
    newArr.push(reducedArray);
  });
}
arr();
console.log(newArr);
