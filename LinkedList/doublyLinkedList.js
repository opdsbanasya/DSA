function createNode(data) {
  return {
    data,
    next: null,
    prev: null,
  };
}

// add at head
function addAtHead(head, data) {
  // edge case
  if (head == null) {
    return createNode(data);
  }

  let newNode = createNode(data);
  newNode.next = head;
  head.prev = newNode;
  head = newNode;

  return head;
}

// remove head
function removeHead(head) {
  // edge case
  if (head == null || head.next == null) return head;

  let nextNode = head.next;
  nextNode.prev = null;
  head.next == null;
  head = nextNode;
  return head;
}

// add at tail
function addAtTail(head, data) {
  // edge case
  if (head == null) {
    return addAtHead(head, data);
  }

  let temp = head;
  while (temp.next != null) {
    temp = temp.next;
  }
  let newNode = createNode(data);
  temp.next = newNode;
  newNode.prev = temp;
  return head;
}

// remove tail
function removeTail(head) {
  if (head == null || head.next == null) {
    return head;
  }

  let temp = head;
  while (temp.next != null) {
    temp = temp.next;
  }
  let prevNode = temp.prev;
  temp.prev = null;
  prevNode.next = null;
  return head;
}

// addAt
function addAt(head, i, data) {
  if (head == null || i == 0) {
    return addAtHead(head, data);
  }

  let temp = head;
  let count = 0;
  while (temp.next != null && count < i - 1) {
    temp = temp.next;
    count += 1;
  }

  if (temp.next == null || count < i - 1) {
    return addAtTail(head, data);
  }

  let newNode = createNode(data);
  let nextNode = temp.next;
  temp.next = newNode;
  newNode.prev = temp;
  newNode.next = nextNode;
  nextNode.prev = newNode;

  return head;
}

// removeAt
function removeAt(head, i) {
  if (head == null || head.next == null) {
    return head;
  }

  if (i == 0) {
    return removeHead(head);
  }

  let temp = head;
  let count = 0;

  while (temp.next != null && count < i - 1) {
    temp = temp.next;
    count += 1;
  }

  if (temp.next == null && count <= i - 1) return head;

  let nodeToBeRemoved = temp.next;
  if (nodeToBeRemoved.next != null) {
    nodeToBeRemoved.next.prev = temp;
  }
  temp.next = nodeToBeRemoved.next;
  nodeToBeRemoved.next = null;
  nodeToBeRemoved.prev = null;

  return head;
}

// display
function display(head) {
  let temp = head;
  let result = "X ↔ ";
  while (temp != null) {
    result = result + temp.data + " ↔ ";
    temp = temp.next;
  }
  result += "X";
  console.log(result);
}

let head = null;
head = addAtHead(head, 10);
head = addAtHead(head, 20);
head = addAtHead(head, 30);
head = addAtHead(head, 40);

display(head);
head = removeHead(head);
display(head);
head = addAtTail(head, 50);
head = addAtTail(head, 60);
// display(head);
// head = removeTail(head);
display(head);
head = addAt(head, 6, 80);
display(head);
head = removeAt(head, 6);
display(head);
