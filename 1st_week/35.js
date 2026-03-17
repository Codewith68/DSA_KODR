let num=Number(prompt("Enter a number"));
let ld;
let sumOfDigits=0;
while(num>0){
    ld=num%10;
    sumOfDigits+=ld;
    num=Math.floor(num/10);
}
console.log(sumOfDigits);