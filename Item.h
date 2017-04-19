#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Item{

  public:
    int current;
    int key;
    Item(int k) : key(k){}
    int getKey() {return key;}
    void setKey(int x){key = x;}
    Item(){}
    friend class compareItem;
    friend class Grassland;
    friend class Animal;
    friend class Wolf;
    friend class Rabbit;
    virtual void Run() {}
    virtual ~Item(){}

};

struct compareItem
{
  bool operator()(const Item* t1, const Item* t2) const
  {
    return (t1->key > t2->key);
  }
};

#endif

