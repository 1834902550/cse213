# INTRODUCTION


### In a circular singly linked list, the last node of the list contains a pointer to the first node of the list. The circular singly linked list has no beginning and no ending. There is no null value present in the next part of any of the nodes.
### To implement a circular singly linked list, we take an external pointer that points to the last node of the list. If we have a pointer last pointing to the last node, then last -> next will point to the first node. The pointer last points to node Z and last -> next points to node P.
### There are many functions declared in a linked list. Some of them are giving below:
*	Head:  The entry point into a linked list is called the head of the list. It should be noted that head is not a separate node, but the first reference to the first node. If the list is empty then the head is a null reference.
*	Tail:  The last of a linked list is called the tail of the list. The tail node is a special node. Where the nest pointer is always pointing or linking to a null reference indicating the end of the list.
*	Empty:  Linked list should have a “head” pointer. If the head is set to null then it have a zero-length linked list.
*	Size:  Linked list size method is used to get the size of the linked list or the number of elements present in the linked list. This method doesn’t take any parameter. This method returns the size or the number of elements present in the linked list.
*	Front and Back: In a circular linked list, all nodes are linked in a continuous circle, without using null. For lists with a front and a back, one stores a reference to the last node in the list. The next node after the last node is the first node.
*	Pop:  Linked list pop method pops an elements from the stack represented by this list. Popping means remove and return the first elements of the list.  
*	Push: Push method is used to push an element at the starting of the stack represented by linked list. This is similar to the add first method of linked list and simply inserts the elements at the first position or top of the linked list.

# USES OF SINGLE WAY CIRCULAR LINKED LIST


### Circular list are used in application where the entire list is accessed one by one in a loop. It is also used by the operating system to share time for different users, generally uses a round robin time sharing mechanism. Circular linked list also used for implementation for advanced data structure.

