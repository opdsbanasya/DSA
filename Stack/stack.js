function createNode(val){
    return {
        val,
        next: null
    }
}

function pushElement(top, data){
    if(top == null) {
        return createNode(data);
    }

    let newNode = createNode(data);
    newNode.next = top;
    top = newNode;
    return top;
}

function popElement(top){
    if(top == null) return top;

    let temp = top;
    top = top.next;
    temp.next = null;
    return top;
}

function peekElement(top){
    if(top == null) return null;

    return top.val;
}

function displayList(top) {
  let temp = top;
  let result = "";
  while (temp != null) {
    result = result + temp.val + " → ";
    temp = temp.next;
  }
  result = result + "X";
  console.log(result);
}

let top = null;
top = pushElement(top, 2);
top = pushElement(top, 3);
top = pushElement(top, 4);
top = pushElement(top, 5);
displayList(top)
top = popElement(top);
displayList(top);
console.log(peekElement(top));
