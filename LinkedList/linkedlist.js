// Create a function that return an object with data and next
function createNode(value) {
  return {
    data: value,
    next: null,
  };
}

// Add at Head
function addAtHead(head, data) {
  let newNode = createNode(data);
  newNode.next = head;
  head = newNode;
  return newNode;
}

// Add at Tail
function addAtTail(head, data){
    // Edge Case -> if list empty
    if(head == null){
        return addAtHead(head, data);
    }

    let temp = head;
    while(temp.next != null){
        temp = temp.next;
    }

    let newNode = createNode(data);
    temp.next = newNode;
    return head;
}

// Add At ith node
function addAt(haed, i, data){
    if(head == null) return;
    let temp = head;
    let count = 0;
    while(count < i-1){
        temp = temp.next;
        count += 1;
    }

    let newNode = createNode(data);
    let nextI = temp.next;
    temp.next = newNode;
    newNode.next = nextI;

    return head;
}

// Remove From Head
function removeAtHead(head){
    if(head == null) return;
    newHead = head.next;
    head.next = null;
    return newHead;
}

// Remove from Tail
function removeAtTail(head){
    if(head == null || head.next == null) return;
    
    let temp = head;
    while(temp.next.next != null){
        temp = temp.next;
    }
    temp.next = null;
    return head;
}

function removeAt(head, i){
    if(head == null) return;
    let temp = head;
    let count = 0;
    while(count < i-1){
        temp = temp.next;
        count += 1;
    }
    let nodeToBeRemoved = temp.next;
    let nextOfRemovedNode = temp.next.next;
    temp.next = nextOfRemovedNode;
    nodeToBeRemoved.next = null;
    return head;
}

// Display
function displayList(head){
    let temp = head;
    let result = "";
    while(temp != null){
        result = result + temp.data + " → ";
        temp = temp.next;
    }
    result = result + "X";
    console.log(result);
}

let head = null;
head = addAtHead(head, 10);
head = addAtHead(head, 20);
head = addAtHead(head, 30);
head = addAtTail(head, 50);
head = addAtTail(head, 40);
// displayList(head)
// head = removeAtHead(head);
// displayList(head);
// head = removeAtTail(head);
displayList(head);
head = addAt(head, 2, 70);
displayList(head);
head = removeAt(head, 3);
head = removeAt(head, 1);
displayList(head);
// Add At Tail
