

#ifndef GRASSLAND_H
#define GRASSLAND_H
#include "Item.h"
#include "Animal.h"


using namespace std;


class Cell : public Item {
	/*
	Animal* Animal;
	int lastEaten;
	int x;
	int y;*/
};
//forward declare animal, wolf, rabbit
class Grassland:public Item{
public:
	/* //delette this one
  priority_queue<Item*, vector<Item*>, compareItem>* q;

  public:
  	//FindRabbitAround(int x, int y);
  	Grassland(int lr, int ar, int w);
  	void Report() //reports scores
  	virtual void Run() // virtual function
 	Rabbit* FindRabbitAround(int x, int y);
 	void MoveWolf(int x, int y);
 	void MoveRabbit(int x, int y);
  	virtual ~Grassland(); //delete something*?
  	/*
    Grassland();
    Grassland(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){}
    ~Grassland(){}
    //put end comment here */
};

  
  
  
  
  
  
  
  
#endif
