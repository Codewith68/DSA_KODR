let n=Number(prompt("Enter a number"));
let fact=1;
for(let i=1;i<=n;i++){
    fact*=i
    console.log(`factorial of ${i} is ${fact}`)
}
console.log(`factorial of ${n} is ${fact}`)