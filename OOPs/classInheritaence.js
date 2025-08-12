class Category {
  constructor(c) {
    this.category = c;
  }
}

class Product extends Category {
  constructor(n, c) {
    super(c);
    this.name = n;
  }
}

Product.prototype.display = function () {
  console.log(this);
};

const p = new Product("Laptop", "Electornics");
p.display();
