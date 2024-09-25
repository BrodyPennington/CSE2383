#include <iostream>
#include "Chall1.h"

LinkedList::~LinkedList() {
    Node *tmp = head;
    Node *rmv;
    
    while (tmp != nullptr) {

        // set remove (rmv) to current node (tmp)
        rmv = tmp;
        // points temp to the next node, stores in tmp;
        tmp = tmp->next;
        // deletes the current node (tmp) stored in remove (rmv) above
        delete rmv; 
        
        
    }
}


