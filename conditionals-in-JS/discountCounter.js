let amount = Number(prompt("What is the final Amount ?"))
let dis = 0;
console.log(amount)

if (isNaN(amount) || amount < 0){
    console.log("Enter a value Or Greater Than 0")
}

else{
    if (amount > 0 && amount <= 5500){
        dis = 0
    }else if (amount > 5500 && amount <= 7000){
        dis = 5
    }else if (amount > 7000 && amount <= 9000){
        dis = 10
    }else if (amount > 9000){
        dis = 20
    }
    console.log(amount - Math.floor((dis*amount)/1000))
}
