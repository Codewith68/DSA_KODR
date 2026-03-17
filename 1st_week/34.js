let num=Number(prompt("Enter a number"));

let ld;
while(num>0){
    ld=num%10;
    console.log(ld)
    num=Math.floor(num/10);
}
