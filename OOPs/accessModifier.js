class Product {
    #price;
    constructor (n, p, r){
        this.name = n;
        this.#price = p;
        this.rating = r;
    }

    set price(price){
        if(typeof(price) != "number") return;
        this.#price = price;
    }
    get price(){
        return this.#price;
    }
    display(){
        console.log(this);
    }
}

let p = new Product("Book", 100, 3.9);
console.log(p);
// p.setPrice("hell");
// console.log(p.getPrice());

p.price = 120;
console.log(p.price);