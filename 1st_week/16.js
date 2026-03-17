let Name=prompt("Enter your name");
let age=Number(prompt("Enter your age"));
if(age<18){
    console.log(`Hi ${Name}, you are not eligible to vote.`);
    let valid=18-age;
    console.log(`after ${valid} year you can vote`)
}
else if(age>=18){
    console.log(`Hi ${Name}, you are eligible to vote.`);
    
}
else{
    console.log("Invalid input");
}