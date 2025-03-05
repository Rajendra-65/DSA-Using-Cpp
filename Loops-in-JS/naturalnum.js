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
            let sum = 0;
            for(var i = 1; i <= ans; i++){
                sum += i
            }
            console.log(sum)
        }
    }
}
