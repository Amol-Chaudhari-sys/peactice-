function h(){
    console.log("hello")
}
setTimeout(h,1*1000)

for (let x = 10; x >= 0; x--) {

    setTimeout(function () {
        console.log(x)
    }, (10 - x )* 1000)
}

arr=[9,12,15,2]
arr=arr.map((ele)=>
    ele*2)

console.log(arr)


arr =arr.map(function(ele){ return ele*ele})
console.log(arr)

