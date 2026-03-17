let p=Number(prompt("Enter the principle amount"));
let r=Number(prompt("Enter the rate of interest"));
let t=Number(prompt("Enter the time")); 
let si=(p*r*t)/100;
// console.log(`The simple interest is ${si}`);


let n=Number(prompt("Enter the number of terms"));
r=r/100;
let A=p*Math.pow(1+r/t,n*t)
let CI=A-p;
console.log(`The compound interest is`,CI.toFixed(2));