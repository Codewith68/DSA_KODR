let num=Number(prompt("Enter a number"));
let originalNum=num;
let r=0;
let ld;
while(num>0){
    ld=num%10;
    r=r*10+ld;
    num=Math.floor(num/10);
}
if(r==originalNum) console.log(`${originalNum} is a palindrome`);
else console.log(`${originalNum} is not a palindrome`);