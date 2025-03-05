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
            let prime = true
            for(var i = 2; i <= Math.floor(ans/2) ; i++){
                if (ans % i === 0){
                    prime = false
                    break
                }
            }
            console.log(prime)
        }
    }
}