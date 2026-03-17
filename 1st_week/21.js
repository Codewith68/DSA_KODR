let unit=Number(prompt("Enter the number of units"));// 700
let bill=0;
if(unit>500){
    bill=(unit-500)*100;
    unit=500
}
else if(unit>200&&unit<=500){
    bill+=(unit-200)*50;
    unit=200
}
else if(unit>100&&unit<=200){
    bill+=(unit-100)*25;
    unit=100
}
else if(unit>50&&unit<=100){
    bill+=(unit-50)*10;
    unit=50
}
else if(unit>20&&unit<=50){
    bill+=(unit-20)*5;
    unit=20
}
else if(unit>10&&unit<=20){
    bill+=(unit-10)*2;
    unit=10
}
else if(unit>5&&unit<=10){
    bill+=(unit-5)*1;
    unit=5
}
else{
    console.log("Invalid input");
    return;
}
let total=bill+unit;
console.log(`The total bill is ${total}`);