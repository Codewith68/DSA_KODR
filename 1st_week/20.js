let amount=Number(prompt("Enter the amount"));
let dis=0;
if(amount>5000&&amount<=10000) dis=0;
else if(amount>10000&&amount<=20000) dis=10;
else if(amount<20000&&amount<=30000) dis=20;
else if(amount>30000) dis=30;
else{
    console.log("Invalid input");
    return;
}
let final=amount-Math.floor(((dis*amount)/100));
console.log(`The discounted amount is ${final}`);