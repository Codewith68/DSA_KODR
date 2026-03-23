const prompt = require('prompt-sync')();

let menu = {
    "1": { name: "Burger", price: 5 },
    "2": { name: "Pizza", price: 8 },
    "3": { name: "Pasta", price: 7 },
    "4": { name: "Maggi", price: 4 }
};

let order = [];

function displayMenu() {
    console.log("Menu:");
    for (let key in menu) {
        console.log(`${key}. ${menu[key].name} - $${menu[key].price}`);
    }
}

function takeOrder() { 
    let choice = prompt("Enter the item number to order (or 'q' to quit): ");
    while (choice.toLowerCase() !== 'q') {
        if (menu[choice]) {
            order.push(menu[choice]);
            console.log(`${menu[choice].name} added to your order.`);
        } else {
            console.log("Invalid choice. Please try again.");
        }
        choice = prompt("Enter the item number to order (or 'q' to quit): ");
    }
}

function calculateTotal() {
    let total = 0;
    for (let item of order) {
        total += item.price;
    }
    return total;
}

function main() {
    displayMenu();
    takeOrder();
    let total = calculateTotal();
    console.log(`Your total is: $${total}`);
}

main();