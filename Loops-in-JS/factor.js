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
            // let fact = 1;
            for(var i = 1; i <= Math.floor(ans / 2) ; i++){
                if(ans % i === 0){
                    console.log(i)
                }
            }
            console.log(ans)
        }
    }
}
