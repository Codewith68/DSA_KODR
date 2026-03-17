let a=Number(prompt("Enter a number"));
let b=Number(prompt("Enter another number"));
let c=Number(prompt("Enter a third number"));

if(a>b){
    if(a>c) console.log(`${a} is greater`)
    else  console.log(`${c} is Greater`)
}
else{
    if(b>c) console.log(`${b} is greater`)
    else  console.log(`${c} is Greater`)
}