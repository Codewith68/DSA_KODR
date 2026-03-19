let num=665;
let square=num*num;

let temp=num;

while(temp>0){
    if(temp%10!==square%10){
        console.log("Not Automorphic");
        break;
    }
    temp=Math.floor(temp / 10);
    square=Math.floor(square / 10);
}

if(temp===0) console.log("Automorphic");