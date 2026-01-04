// objects are like map / Dictionary in term of key value pair 
let x={
    name: "amol",
    age: 20

}
for (const key in x) {
    if (x.hasOwnProperty.call(x, key)) {
        console.log(key , x[key])
        
    }
}
