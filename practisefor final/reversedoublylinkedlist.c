void reverseList() {
  //1. If head is not null create three nodes
  //   prevNode - pointing to head,
  //   tempNode - pointing to head,
  //   curNode - pointing to next of head
  if(head != NULL) {
    Node* prevNode = head;
    Node* tempNode = head;
    Node* curNode = head->next;
    
    //2. assign next and previous of the 
    //   prevNode as null to make the first 
    //   node as last node of the reversed list
    prevNode->next = NULL;
    prevNode->prev = NULL;

    while(curNode != NULL) {
      //3. While the curNode is not null adjust links 
      //   (unlink curNode and link it to the reversed list 
      //   from front and modify curNode and prevNode) 
      tempNode = curNode->next;
      curNode->next = prevNode;
      prevNode->prev = curNode;
      prevNode = curNode;
      curNode = tempNode;
    }

    //4. Make prevNode (last node) as head
    head = prevNode;
  }
} 