let numb=Number(prompt("Enter a number"));
let factor=0;
for(let i=0;i<=numb;i++){
    if(numb%i==0) factor++;
}
console.log(factor)