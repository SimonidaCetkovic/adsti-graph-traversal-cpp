#include "node.h"

Node* Node::setChild(char character, bool completeWordFlag){
    Node* child = new Node;
    child->isCompleteWord = completeWordFlag;
    this->children[character-97] = child;
    
    return child;
}
