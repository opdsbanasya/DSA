# Stack

- Linear data structure that follows the Last In First Out (LIFO) principle.
- Data can be only accessed from one end of stack.
- Apart from the topmost element no other element is directly accessible in a stack.
- Stack operations include:
  - **Push**: Add an element to the top of the stack.
  - **Pop**: Remove the top element from the stack.
  - **Peek/Top**: Retrieve the top element without removing it.
  - **isEmpty**: Check if the stack is empty.
- **Applications**:
  - Function call management in programming languages.
  - Undo mechanisms in text editors.
  - Expression evaluation and syntax parsing.
  - Backtracking algorithms (e.g., maze solving).

## Implementation

There are multiple ways to implement their stack data structure:

1. **Using a linked list**: It makes easy implementation of stack operations as we can dynamically allocate memory.
   - Each node contains data and a pointer to the next node.
   - The top of the stack is represented by the head of the linked list.
   - Push operation adds a new node at the head, and pop operation removes the head node.
   - Whenever we do add at contains the last element that we have added.
   - `push` → `add` → `addAtHead`
   - `pop` → `remove` → `removeAtHead`
   - Time Complexity:
     - Push: O(1)
     - Pop: O(1)
     - Peek: O(1)
     - isEmpty: O(1)
   - Space Complexity: O(n) for n elements in the stack.
   - Check the code in [**stack.js**](./stack.js)
2. **Using an array**: It provides a fixed-size stack with efficient access to elements.
   - An array is used to store stack elements.
   - A variable (top) keeps track of the index of the top element.
   - Push operation adds an element at the top index and increments it.
   - Pop operation decrements the top index and retrieves the element.
   - Peek operation returns the element at the top index without modifying it.
   - isEmpty operation checks if the top index is -1.
   - Time Complexity:
     - Push: O(1)
     - Pop: O(1)
     - Peek: O(1)
     - isEmpty: O(1)
   - Space Complexity: O(n) for n elements in the stack.

## Problems
1. Write method that takes a stack as an input and an element X and instead of inserting X at the top, it inserts X at the bottom of the stack. Time complexity need not to be O(1).
**Approach**:
    - Remove all elements from the stack and store them in a temporary stack.
    - Push the element X onto the original stack.
    - Push all elements from the temporary stack back onto the original stack.