#include "graph.h"
#include "node.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Arrange
    Graph g;
    Node* catNode = new Node;
    catNode->isCompleteWord = true;
    Node* catsNode = catNode->setChild('s', true);
    Node* catcNode = catNode->setChild('c', false);
    Node* catchNode = catcNode->setChild('h', true);
    Node* cateNode = catNode->setChild('e', false);
    Node* caterNode = cateNode->setChild('r', true);
    
    //Act
    list<string> result = g.DFS("cat", catNode);
    
    //TODO: Assert
    assert(result.size() == 4);
    list<string>::iterator it = result.begin();
    
    assert(*it == "cat");
    std::advance(it, 1);
    
    assert(*it == "cats");
    std::advance(it, 1);
    
    assert(*it == "catch");
    std::advance(it, 1);
    
    assert(*it == "cater");
 
    return 0;
}