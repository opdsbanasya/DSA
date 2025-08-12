function Product(n, p){
    this.name = n;
    this.price = p;
}
const p = new Product("Book", 500);

Product.prototype.display = function(){
    console.log(this);
}

p.display();
