let arr=[{ 
    name:"sachin",
    age: 50,
    country: "India",
    events: ["ODI", "Test", "T20"]
},{
    name:"virat",
    age: 35,
    country: "India",
    events: ["ODI", "Test", "T20"]
}]


function range(start, end) {
  const result = [];

  for (let i = start; i <= end; i++) {
    result.push(i);
  }

  return result;
}
console.log(range(1, 10)); 
function sum(arr){
  let sum=0;
  for(let i=0;i<arr.length; i++){
    sum=sum+arr[i];
  }
  return sum;
}
let array=[5,7,3,8,4,3,2,57,8,9,6,4,3,2,1];
console.log(sum(array));
//example to show ... method
let arr1=[1,2,3];
let arr2=[4,5,6];
let arr3=[...arr1,...arr2];
console.log(arr3);
//example to show rest operator
function sum1(...numbers){
  let sum=0;
  for(let i=0; i<numbers.length; i++){
    sum=sum+numbers[i];
  }   
  return sum;
}
console.log(sum1(1,2,3,4,5));
//reverse an array in place
function reverseArray(arr){
  let start=0;
  let end=arr.length-1;
  while(start<end){
    let temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
  return arr;
}
let arr4=[1,2,3,4,5];
console.log(reverseArray(arr4));
