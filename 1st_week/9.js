let a=Number(prompt("Enter the first number"));
let b=Number(prompt("Enter the second number"));
let c=Number(prompt("Enter the third number"));

if(a+b<=c || a+c<=b || b+c<=a){
    console.log("invalid triangle")
}
let s=((a+b+c)/2);
let A=Math.sqrt(s*(s-a)*(s-b)*(s-c));
console.log(`The area of the triangle is ${A}`);