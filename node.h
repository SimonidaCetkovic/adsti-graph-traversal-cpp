#ifndef NODE_H
#define NODE_H

class Node {
  public:
    bool isCompleteWord;
    Node* children[26];
    
    Node* setChild(char character, bool completeWordFlag);
};

#endif