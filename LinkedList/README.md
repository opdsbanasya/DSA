# Linked List

- Linked lists are a fundamental data structure that consist of nodes, where each node contains a value and a reference to the next node in the sequence. This allows for efficient insertion and deletion of elements, as well as dynamic memory allocation.
- Linked lists form chain-like structures.
- `node` is a basic unit of a linked list, which contains data and a pointer to the next node.
- `link` is a reference to the next node in the sequence.

## Comparison with Arrays

- In arrays, we used to have contiguous memory allocation, but linked list nodes are just simple objects that get created in random available memory locations so they don't need to be contiguous memory allocation.
- Arrays have a fixed size, while linked lists can grow and shrink dynamically.
- In arrays, we can randomly access an element by index number, but we can't do it in linked list there are no random access we have to start from head node and go ahead one by one.
- In arrays, we can access elements in O(1) time, but in linked lists, we have to traverse the list to access an element, which takes O(n) time in the worst case.

## Types of Linked Lists

- **Singly Linked List**: Each node points to the next node, and the last node points to `null`.
- **Doubly Linked List**: Each node points to both the next and previous nodes, allowing traversal in both directions.
- **Circular Linked List**: The last node points back to the first node, forming a circle.
- **Circular Doubly Linked List**: Combines the features of both circular and doubly linked lists, allowing traversal in both directions with a circular structure.
- **Skip List**: A layered linked list that allows for faster search operations by skipping over some nodes.

## Singly Linked List

- A singly linked list is a type of linked list where each node contains a value and a reference to the next node in the sequence.
- The first node is called the head, and the last node points to `null`.
- Singly linked lists allow for efficient insertion and deletion of elements, as well as dynamic memory allocation.
- The basic operations on a singly linked list include insertion, deletion, and traversal.

### Operations

- **Creation**: Create a function that returns a new node with a given value.
    ```JavaScript
    function createNode(value) {
        return {
            data: value,
            next: null
        };
    }
    ```
- **Add at Head**: We want to add a new note behind the head and make this new node as the head of the list.
    - Create a new node object with data and so and next property as null.
    - Set the next property of the new node as head
    - Update this head to point to the new node
    - Time complexity: O(1)
    ```JavaScript
    function addAtHead(head, data) {
        let newNode = createNode(data);
        newNode.next = head;
        head = newNode;
        return newNode;
    }
    ```
- **Add at Tail**: We have not direct access of tail node you have to I treat your head node till tail node.
    - Create a new node object with data and so and next property as null.
    - Traverse the list from head to find the last node.
    - Attach the new node after tail node
    - Time complexity: O(n)
    ```JavaScript
    function addAtTail(head, data) {
        // Edge Case -> if list empty
        if (head == null) {
            return addAtHead(head, data);
        }

        let temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        let newNode = createNode(data);
        temp.next = newNode;
        return head;
    }
    ```
- **Remove at Head**: We want to remove the head node and make the next node as the new head.
   - Store the new head 
   - Detach he head from list
   - return the new head
   - Time complexity: O(1)
   - There the head object that we are not used now often it removed by garbage collector in JavaScript but in CPP you have to manually delete.
   ```javaScript
    function removeAtHead(head) {
        if (head == null) return;
        newHead = head.next;
        head.next = null;
        return newHead;
    }
    ```
- **Remove at Tail**: We have to traverse the list from head to find the second last node and make its next property as null.
   - Traverse the list from head to find the second last node.
   - Break the connection of the second last node and last node.
   - Edge case if there is a single node in list then just return head.
   ```javascript
   function removeAtTail(head) {
        if (head == null || head.next == null) return;

        let temp = head;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
        return head;
    }
    ```
- **Add at index**: We want to add a new node at a specific index in the list.
   - If index is 0, call `addAtHead`.
   - Traverse the list to find the node at index-1.
   - Create a new node and set its next property to the next of the previous node.
   - Set the next of the previous node to the new node.
   - Time complexity: O(n)
   ```javascript
   function addAtIndex(head, data, index) {
       if (head == null) return;
       let temp = head;
       let count = 0;
       while (count < index - 1) {
           temp = temp.next;
            count += 1;
        }

        let newNode = createNode(data);
        let nextI = temp.next;
        temp.next = newNode;
        newNode.next = nextI;

        return head;
   }
   ```
- **Remove at index**: We want to remove a node at a specific index in the list.
    - If index is 0, call `return head`.
    - If the next node is null, return the head.
    - Traverse the list to find the node at index-1.
    - Set the next of the previous node to the next of the node to be removed.
    - Set the next of the node to be removed to null.
    - Time complexity: O(n)
    ```js
    function removeAt(head, i) {
        let temp = head;
        if (head == null || temp.next == null) return;
        if(i == 0) return removeAtHead(head);
        let count = 0;
        while (temp.next != null && count < i - 1) {
            temp = temp.next;
            count += 1;
        }
        if (temp.next == null && count <= i - 1) return head;
        let nodeToBeRemoved = temp.next;
        let nextOfRemovedNode = temp.next.next;
        temp.next = nextOfRemovedNode;
        nodeToBeRemoved.next = null;
        return head;
    }
    ```
- **Display**: We want to display the linked list.
    - Traverse the list from head and print each node's data.
    - Time complexity: O(n)
    ```javascript
    function display(head) {
        let temp = head;
        let result = "";
        while (temp != null) {
            result = result + temp.data + " → ";
            temp = temp.next;
        }
        result = result + "X";
        console.log(result);
    }
    ```

## Doubly Linked List
- A doubly linked list is a type of linked list where each node contains a value, a reference to the next node, and a reference to the previous node.
- The first node is called the head, and the last node points to `null`.
- There are 3 pointers in each node: `prev`, `data`, and `next`.
- Doubly linked lists allow for efficient insertion and deletion of elements, as well as dynamic memory allocation.
- The basic operations on a doubly linked list include insertion, deletion, and traversal.

### Operations
- **Creation**: Create a function that returns a new node with a given value.
    ```JavaScript
    function createDoublyNode(value) {
        return {
            data: value,
            next: null,
            prev: null
        };
    }
    ```
- **Add at Head**: We want to add a new node behind the head and make this new node as the head of the list.
- **Add at Tail**: We have not direct access of tail node you have to I treat your head node till tail node.
- **Remove at Head**: We want to remove the head node and make the next node as the new head.
- **Remove at Tail**: We have to traverse the list from head to find the second last node and make its next property as null.
- **Add at index**: We want to add a new node at a specific index in the list.
- **Remove at index**: We want to remove a node at a specific index in the list.
- **Display**: We want to display the doubly linked list.
- *See the full code implementation for each operation in the file [**doublyLinkedList.js**](doublyLinkedList.js)*

## Hare and Rabbit Algorithm
- **Problem**: [**Middle of the Linked List**](https://leetcode.com/problems/middle-of-the-linked-list/description/)
- **Example 1**
    - ![Example](https://assets.leetcode.com/uploads/2021/07/23/lc-midlist1.jpg)
    - Input: head = [1,2,3,4,5]
    - Output: [3,4,5]
    - Explanation: The middle node of the list is node 3.
- **Solution**: Use two pointers, one moving twice as fast as the other.
    ```js
        var middleNode = function(head) {
        if(head?.next == null) return head;
        
        let fast = head;
        let slow = head;
        while(fast.next != null && fast.next.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        if(fast.next == null) return slow;
        else return slow.next;
        
        return temp;
    };
    ``` 