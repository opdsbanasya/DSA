function Category(c) {
  this.category = c;
}

function Product(n, c) {
  Category.call(this, c); // call parent constructor
  this.name = n;
}

Product.prototype = Object.create(Category.prototype);
Product.prototype.constructor = Product;

const p = new Product("Laptop", "Electronics");
console.log(p);
