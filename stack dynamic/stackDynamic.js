const stackDynamicArray = () => {
  let i;
  let size = parseInt(prompt("Enter array size:"));
  const myArr = [];

  for (i = 0; i < size; i++) {
    myArr[i] = i * 2;
  }

  for (i = 0; i < size; i++) {
    console.log(myArr);
  }
};

stackDynamicArray();
