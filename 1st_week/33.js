let a=Number(prompt("Enter the first number"));
let b=Number(prompt("Enter the second number"));

let powwer=1;
for(let i=1;i<=b;i++){
    powwer*=a;
}
console.log(`The result of ${a} raised to the power of ${b} is ${powwer}`);