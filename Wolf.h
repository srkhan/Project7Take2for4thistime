#ifndef WOLF_H
#define WOLF_H
#include "Animal.h"
#include <stdlib.h>


using namespace std;

//extern Grassland field [512][512];
class Wolf : public Animal{
  
  public:
    int bday;
    Wolf(int DOB, int x, int y, priority_queue<Item*, vector<Item*>, compareItem >* q): Animal(DOB, q){
        bday = DOB;
 
    this->x = x;
    this->y = y;
    }
    void Run(){
    if (getKey()<20)
    {
        key+= 4;
        //cout<<"Wolf"<<endl;
        q->push(this);
        cout<<"Wolf eats "<<getKey()<<endl;
        cout<<"Wolf Coordinate x = "<<x<< "and Y =" << this->y <<endl;
    }
    }
    ~Wolf(){}
    
    };
  
  

    

#endif
