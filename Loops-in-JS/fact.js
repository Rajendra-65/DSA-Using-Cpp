var pr = prompt("Enter a number:")

if(pr === null){
    console.log("Cancelled")
}

else{
    var ans = Number(pr);

    if(isNaN(ans)){
        console.log("Invalid Input")
    }else{
        if(ans < 0){
            console.log("Enter a positive number")
        }else{
            let fact = 1;
            for(var i = ans; i > 0 ; i--){
                fact *= i
            }
            console.log(fact)
        }
    }
}
