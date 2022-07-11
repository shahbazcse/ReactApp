// var Keyword in JS

// function sayHello(){
//   for(var i=0; i<5; i++){
//     console.log(i);
//   }
//   console.log(i);
// }
// /*
// i cannot be accessed outside the function 
// in which it is defined.
// */
// // console.log(i); // error
// sayHello();

// let Keyword in JS

// function sayHello(){
//   for(let i=0; i<5; i++){
//     console.log(i);
//   }
//   /*
//   i declared using let keyword can only be
//   accessed inside the block it is declared in.
//   It cannot be accessed outside the block.
//   */
//   // console.log(i); // error
// }
// /*
// i cannot be accessed outside the function 
// in which it is defined.
// */
// // console.log(i); // error
// sayHello();

// // const Keyword in JS

//  const x=1;
// //  x=2; // error (a const variable cannot be reasssigned)

// // Objects

// const person ={
//   name: 'Shahbaz',
//   walk: function(){}, // walk is a Method; A Function inside an Object is called a Method in OOPs.
//   talk() {} // another clean syntax to define a Method (eg: walk() {})
// };

// // Accessing members of an Object
// // #1 Using dot
// person.walk();
// person.name = 'Tony';

// // #2 Using bracket
// const targetMember = 'name';
// person[targetMember.value] = 'John';

// // this Keyword

// const person = {
//   name: 'John',
//   walk(){
//     console.log(this);
//   }
// }

// person.walk();

// const walk = person.walk;
// walk();

// // Bind method and this Keyword

// const person = {
//   name: 'John',
//   walk(){
//     console.log(this);
//   }
// }

// person.walk();

// const walk = person.walk.bind(person);
// walk();

// Arrow functions

// > Normal function:
// const square = function(number){
//   return number*number;
// }

// // > Arrow function:
// const square = number => {
//   return number*number;
// }
// console.log(square(5));

// // Usage of Arrow Functions

// // > Example:
// const job = [
//   {id:1, isActive: true},
//   {id:2, isActive: true},
//   {id:3, isActive: false},
// ]

// const activeJobs = job.filter(job => job.isActive);
// console.log(activeJobs);

// // Arrow function and this keyword

// const person = {
//   talk(){
//     setTimeout(() => {
//       console.log(this);
//     },1000);
//   }
// };

// person.talk();

