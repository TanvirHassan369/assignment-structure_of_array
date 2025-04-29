const size = parseInt(prompt("Enter size of array : "));

const myArr = new Array(size);
let i;

for (i = 0; i < size; i++) {
  myArr[i] = i * 2;
}

for (i = 0; i < size; i++) {
  console.log(myArr);
}
