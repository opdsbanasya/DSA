class Product{
    name;
    price;
    rating;

    display(){
        console.log(this);
    }
}

let p = new Product();
p.display();