
#ifndef ANIMAL_H
#define ANIMAL_H
#include "Item.h"

using namespace std;

class Animal : public Item{
  
  protected:
    int x, y;
    
 
  public:
     priority_queue<Item*, vector<Item*>, compareItem>* q;
    Animal(int key, priority_queue<Item*, vector<Item*>, compareItem>* q1) : Item(key), q(q1){}
    
    virtual void Run(){}

    virtual ~Animal(){}

};
  
#endif
