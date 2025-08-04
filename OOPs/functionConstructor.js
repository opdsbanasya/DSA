function product(n, p, r) {
    this.name = n;
    this.price = p;
    this.rating = r;

    this.display = function() {
        console.log(this);
    }
}
let p = new product("Book", 100, 3.9);
p.display(); // Product { name: 'Book', price: 100, rating: 3.9 }