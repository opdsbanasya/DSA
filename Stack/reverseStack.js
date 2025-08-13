const { addAtBottom } = require("./addAtBottom");
const { displayList, pushElement } = require("./stack");

function reverseStack(top) {
  if (top == null) return null;

  let el = top;
  top = top.next;
  el.next = null;

  top = reverseStack(top);
  top = addAtBottom(top, el.val);
  return top;
}

let top = null;
top = pushElement(top, 2);
top = pushElement(top, 3);
top = pushElement(top, 4);
top = pushElement(top, 5);
displayList(top);

top = reverseStack(top);
displayList(top);
