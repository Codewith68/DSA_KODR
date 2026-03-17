let numb = Number(prompt("Enter a number"));
let factor = true;
if (numb <= 1) {
    factor = false;
}
for (let i = 2; i < numb; i++) {
    if (numb % i == 0) {
        factor = false;
        break;
    }
}
if (factor) console.log(`${numb} is a prime number`);
else console.log(`${numb} is not a prime number`);