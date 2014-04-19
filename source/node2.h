#ifndef NODE_H
#define NODE_H
#include<string>

class Node2
{
public:
    std::string value;
    Node2* left;
    Node2* right;
    Node2();
    Node2(std::string);
    Node2(std::string, Node2*);
    Node2(std::string, Node2*, Node2* );
};

#endif // NODE_H
