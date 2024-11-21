class xy{
    constructor(y){
        console.log('my name is '+y)
    }

    fileobj = (i,n,a) => {

         let obj = {
            id : 30,
            name : 'vishal',
            age : 19
        }
        console.log(obj.id,obj.name,obj.age)
        return obj;
    }
}

var p = new xy('vishal');
console.log("f = = = ",p.fileobj(2034,'vishal',19))

let datae = new Date();
//  2023 ,4 ,9 in carlibrecat
// console.log('date = = = ',datae);
// console.log('date = = = ',datae);
console.log('Minutes is',datae.getMinutes());
console.log('Date is',datae.getDate());
console.log('Milliseconds is',datae.getMilliseconds());