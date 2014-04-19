#include "node2.h"

using namespace std;

Node2::Node2()
{

}

Node2::Node2(string v, Node2* l, Node2* r)
{
    this->left=l;
    this->right=r;
    this->value=v;
}

Node2::Node2(string v, Node2* l)
{
    this->left=l;
    this->right=NULL;
    this->value=v;
}

Node2::Node2(string v)
{
    this->left=NULL;
    this->right=NULL;
    this->value=v;
}
