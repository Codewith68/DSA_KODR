let num=Number(prompt("Enter a number"));
let r=0;
let ld;
while(num>0){
    ld=num%10;
    r=r*10+ld;
    num=Math.floor(num/10);
}
console.log(r);