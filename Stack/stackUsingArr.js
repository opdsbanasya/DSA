class Stack{
    constructor(cap){
        this.capacity = cap;
        this.top = -1;
        this.stack = new Array(cap).fill(null);
    }

    push(elem){
        if(this.capacity <= this.top+1){
            console.log("Stack is full");
            return;
        }
        this.stack[++this.top] = elem;
        console.log("Element pushed");
    }

    pop(){
        if(this.top === -1){
            console.log("Stack is empty");
            return;
        }

        this.stack[this.top--] = null;
        console.log("Element popped");
    }

    peek(){
        if(this.top === -1){
            console.log("Stack is empty");
            return;
        }
        return this.stack[this.top];
    }

    display(){
        if(this.top === -1){
            console.log("Stack is empty");
            return;
        }
        console.log(this.stack.splice(0, this.top + 1))
    }
}



const st = new Stack(5);
st.push(1)
st.push(2)
st.push(3)
st.push(4)
st.push(5)
st.push(5)
// st.pop()

console.log(st.peek());
st.display();
