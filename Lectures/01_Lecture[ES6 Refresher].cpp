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

        // // Accessing members of an Object:
        // // #1 Using dot
        // person.walk();
        // person.name = 'Tony';

        // // #2 Using bracket:
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

// // Array.map Method:

    // // > Example 1:
    // const colors = ['red', 'green', 'blue'];
    // const items = colors.map(color => `<li>${color}</li>`);
    // console.log(items);

    // // > Example 2:
    // const persons = [
    //     {firstname : "Malcom", lastname: "Reynolds"},
    //     {firstname : "Kaylee", lastname: "Frye"},
    //     {firstname : "Jayne", lastname: "Cobb"}
    //   ];
    // const getFullName = item => [item.firstname,item.lastname].join("");
    // console.log(persons.map(getFullName));

// // Object Destructuring

//     // Example:
//     const address = {
//         street: 'Hammond Street',
//         city: 'Berlin',
//         country: 'Germany'
//     }

//     // // Default way of assigning
//     // const street = address.street;
//     // const city = address.cityl
//     // const country = address.country;

//     // Object Destructuring (New way of assigning)
//     const {street, city, country} = address;
//     console.log(street);
//     console.log(city);
//     console.log(country);
//         // for different variable name:
//         const {street: st, city: ct, country: cy} = address;
//         console.log(st);
//         console.log(ct);
//         console.log(cy);

// // Spread Operator:

// const arr1 = [1,2,3];
// const arr2 = [4,5,6];

//     // // Using concat method:
//     // const combined = arr1.concat(arr2);

//     // Using Spread Operator:
//     // const combined = [...arr1, ...arr2];
//     // console.log(combined);

//     // // Cloning an array:
//     // const clone = [...arr1];
//     // console.log(arr1);
//     // console.log(clone);

//     // Applying Spread Operator on Objects:
//     const first = {name: 'Tony'};
//     const second = {role: 'Ironman'};

//     const combined = {...first, ...second, strength: 50};
//     console.log(combined);

//     // Cloning an Object:
//     const clone = {...first};
//     console.log(first);
//     console.log(clone);

// // Classes:

// const person1 = {
//     name: 'John',
// };

// class Person {
//     constructor(name){
//         this.name = name;
//     }
//     walk(){
//         console.log("walk");
//     }
// };

// const person = new Person('John');
// console.log(person.name);

// // Inheritance:

// class Person {
//     constructor(name){
//         this.name = name;
//     }
//     walk(){
//         console.log("walk");
//     }
// };

// class Teacher extends Person{
//     constructor(name, degree){
//         super(name);
//         this.degree = degree;
//     }
//     teach(){
//         console.log("teach");
//     }
// };

// const teacher1 = new Teacher('Mary', 'M.Tech');
// console.log(teacher1.name);
// console.log(teacher1.degree);

// // Modules:
/*
Default: import ... from '';
Named: import {...} from '';
*/

// import Teacher from "./teacher";

// const teacher1 = new Teacher('Mary', 'M.Tech');
// console.log(teacher1.name);
// console.log(teacher1.degree);
