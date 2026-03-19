let num = Number(prompt("Enter a number"));
let original = num;
let sum = 0;
function fact(num) {
    if (num == 0) return 1;
    return num * fact(num - 1);
}
while (num>0) {
    let ld=num % 10;
    sum+=fact(ld);
    num=Math.floor(num / 10);
}
if(sum == original)
    console.log(`${original} is a strong number`);
else
    console.log(`${original} is not a strong number`);