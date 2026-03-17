let range=Number(prompt("Enter a range"));
let sumEven=0;
sumOdd=0
for(let i=0;i<=range;i++){
    if(i%2==0) sumEven+=i
    else sumOdd+=i
}
console.log(`The sum of even numbers is ${sumEven}`);
console.log(`The sum of odd numbers is ${sumOdd}`);