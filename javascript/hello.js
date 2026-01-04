console.log("Hello js")
console.log(2);
console.log(5);
a=10
b=12

a=b
console.log (a+b)
if (a==9){
    console.log('match ');
}
else if (a>9) {
    console.log("a is grater ");
    }else{
        console.log('a is smaller ')
}
let i=1
while(i<=10){
    console.log(i++)
}
j=1
do{
    console.log(j++)
}while (j<=5)

arr =[1,2,3,4,5,6]
console.log(arr);
arr.push(8)
console.log(arr);
arr.pop()
console.log(arr);
arr.unshift(9)
console.log(arr);
arr.shift()
console.log(arr);

function eqn(c,d) {
    console.log(Math.abs(c)*Math.abs(d))
}
eqn(3,-5)
