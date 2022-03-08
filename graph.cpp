#include "node.h"
#include "graph.h"
#include <bits/stdc++.h>

using namespace std;

list<string> Graph::DFS(string currentWord, Node* node)
{
    list<string> response;
    if(node->isCompleteWord)
    {
        response.push_back(currentWord);
    }
 
    for (int i = 0; i != 25; i++){
        if(node->children[i] != NULL){
            list<string> childResponse = DFS(currentWord+static_cast<char>('a'+i), node->children[i]);
            response.insert(response.end(), childResponse.begin(), childResponse.end());
        }
    }
    
    return response;
}
