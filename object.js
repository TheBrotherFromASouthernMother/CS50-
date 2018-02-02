// let Person = function (name, age, occupation, phobia) {
//   this.name = name;
//   this.age = age;
//   this.occupation = occupation;
//   this.phobia = phobia;
//
// };
//  Person.prototype.says = function() {
//    console.log(`Hi my name is ${this.name}, I am ${this.age} years old,
//     and my occupation is ${this.occupation}`);
//  }
//
//
// const Marcus = new Person('Marcus', 19, 'student', 'dark water');
//
// let talkFunction = Marcus.says.bind(Marcus);
//
// talkFunction();
//
// function Profile () {
//   console.log(this.sound)
// }
//
// let boromir ={
//   sound: "One"
// }
//
// let profileBound = Profile.bind(boromir);
// profileBound();
//
// var person = {
//     firstName:"John",
//     lastName: "Doe",
//     fullName: function() {
//         console.log(this.firstName + " " + this.lastName);
//     }
// }
// var myObject = {
//     firstName:"Mary",
//     lastName: "Doe",
// }
// person.fullName.call(myObject);  // Will return "Mary Doe"
//
//
//
//
// console.log(this)



// let canine = {
//   sound: 'bark'
// }
//
// let dog = {
//   talk: function(name, animal) {
//     console.log(`${this.sound} my name is ${name} ${this.sound} and I am a(n) ${animal}`);
//   }
// }
//
// dog.speak = dog.talk.bind(canine, "Max", "German Shepherd");
//
// dog.speak();

const fighterJet = {
  vehicle: 'plane',
  travels: 'air'
}

// const f18 = {
//   uses: 'blowing shit up'
// }
//
// Object.setPrototypeOf(f18, fighterJet);
//
// console.log(f18.vehicle);

// const f18A = {
//   serviceBranch: "Navy"
// }
//  Object.setPrototypeOf(f18A, f18);
//
//  console.log(f18A.uses + f18A.travels + f18A.serviceBranch);
//
//  fighterJet.topSpeed = 'Mach 2';
//
//  console.log(f18A.topSpeed);
//
//  console.log(f18A);
//
//  function addition (number1, number2) {
//    this.number1 = number1;
//    this.number2 = number2;
//  };
//
// function aRealOne () {
//   return number1 + number2;
// }
//
// let additionByTwo = new addition(1,2);
//
// console.log(addition.length);
// console.log(additionByTwo.__proto__);
// console.log(aRealOne.prototype);

let arr = ["a", "b", "c", undefined, "d", "e", null, 0, "g", false];


function toOb (arr) {
    let obj = {};
    for (let i = 0; i < arr.length; i++) {
    if (arr[i] != undefined) {
        obj[i] = arr[i];
    } else {
      console.log(`The value at index ${i} is undefined`);
        }
    }
    return obj;
}
// for (let key in fighterJet) {
//     arr.push(key);
// };

console.dir(toOb(arr));

var a = null;
var b = undefined;
if (a == b) console.log("yep")






// class Student {
//   dance () {
//     const dances = [
//       'waltz',
//       'tango',
//       'mambo',
//       'foxtrot'
//     ];
//     console.log(`${this.name} is doing the ${dances[Math.floor(Math.random() * dances.length)]}!`);
//   } //end function dance
//   constructor( name, age, eyecolor = 'brown') {
//     this.name = name;
//     this.age = age;
//     this.eyecolor = eyecolor;
//   }
// }
//
// let stevenJ = new Student('Steven', 22, 'blue');
//
// stevenJ.dance();
// console.log(stevenJ);
//
//
//
// class Person {
//   dance() {
//     const dances = [
//       'waltz',
//       'tango',
//       'mambo',
//       'foxtrot'
//     ];
//     console.log(`${this.name} is doing the ${dances[Math.floor(Math.random() * dances.length)]}!`);
//   }
//   constructor( name, age, eyeColor = 'brown') {
//     this.name = name;
//     this.age = age;
//     this.eyeColor = eyeColor;
//   }
// }
//
//
//
// let mark = new Person("Mark", 22, 'blue');
//
// console.log(mark);
//
// mark.dance();
