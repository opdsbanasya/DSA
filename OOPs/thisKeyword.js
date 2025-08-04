// let iphone = {
//     name: "Iphone",
//     price: 100000,
//     rating: 4.8,

//     display(){
//         console.log(this);
//     }
// }

let macbook = {
    name: "Macbook",
    price: 150000,
    rating: 4.8,

    display(){
        console.log(this);
    }
}

macbook.display();

let iphone = {
    name: "Iphone",
    price: 100000,
    rating: 4.8,

    display(){
        let redIphone = {
            name: "Red Iphone",
            price: 120000,
            rating: 4.9,

            // arrow function
            display: () => {
                console.log(this); // refers to the outer context, not redIphone
            }
        }
        redIphone.display(); // { name: "Iphone", price: 100000, rating: 4.8 }
    }
}
iphone.display();