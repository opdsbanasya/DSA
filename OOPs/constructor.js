class Product {
    constructor (n, p, r){
        this.name = n;
        this.price = p;
        this.rating = r;
        return [];
    }

    display(){
        console.log(this);
    }
}

let p = new Product("Book", 100, 3.9);
console.log(p);
