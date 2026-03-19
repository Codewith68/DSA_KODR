let secretNumber=Math.floor(Math.random()*100)+1
let guess;
let attemot=10;
do{
    alert("You have "+attemot+" attempts left");
    guess=Number(prompt("Enter a number"));
    if(guess>secretNumber) alert("Number is Too high")
    else if(guess<secretNumber) alert("Number is Too low")
    else{
        alert("Congratulations, you guessed the number in "+(10-attemot)+" attempts");
        break;
        }
    attemot--;
    }while(guess!==secretNumber && attemot>0)
    if(attemot==0) alert("Sorry you lost your gamw.The number was "+secretNumber)