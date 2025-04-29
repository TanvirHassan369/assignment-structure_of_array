let size = parseInt(prompt("Enter array size:"));
let arr = new Array(size);

for (let i = 0; i < size; i++) {
  arr[i] = i * 2;
}

console.log("Array elements:");
for (let i = 0; i < size; i++) {
  console.log(arr[i]);
}
