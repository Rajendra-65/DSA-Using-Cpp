console.log('HEY!')

let age = Number(prompt("Enter Your Age:"))

if (isNaN(age)){
    console.log("Wrong Inupt..")
}
else if (age >= 18) {
    console.log("You Can Vote")
}else{
    console.log("You Can Not Vote")
}