#include "Grassland.h"
#include "Item.h"
#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <queue>
#include <vector>

using namespace std;

Cell myCell;

Grassland mygrass;

/*
Search methods

//need to create a bool hasRabbit(int x, int y) return bool
//need to create a bool hasGrass(int x, int y) return bool

*/

//set here
/*
#include "Item.h"
#include <iostream>
#include <list>
#include <stdlib.h>
#include "Grassland.h"
#include "Wolf.h"
#include "Rabbit.h"
#include <queue>
using namespace std;

class Grassland:public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    Grassland(int lr, int ar, int w)
    {
      lr = 0;
      ar = 0;
      w = 0;
    }

    //Grassland(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){ cout << "Grassland at " << getKey() << endl;
                setKey(getKey()+10);
                q->push(this);}
    ~Grassland(){}

}; 
*/
  //set uup
  
/*
bool SearchforRabbit(int x, int y){
//we could also make it such that the area is larger than 512 by 512. We could make it 576 by 576
//(added 66, 33 on each side for the wolf roam) and just put those in as no grass no animal constant cells.


//when this is returned true, kill rabbit
//    -need to reset wolf's hunger after the call
//when this is returned false, nothing happens
//    -need to have the wolf roam

//in case we decide not to, see below
//4 cases, one is where the wolf is in the middle
//second is where the wolf is next to a x wall
//third is where the wolf is next to a y wall
//fourth is where the wolf is next to both an x and a y wall
  int i, j;
  if(x < 479 && x > 33)
  {
    if(y < 479 && y > 33)
    {
      for(i = x - 33; i < x + 33; i++)
      {
        for(j = y - 33; j < y + 33; j++)
        {
          if(hasRabbit(i, j))
            {
              //kill rabbit at the coordinates (hasbeenEaten = true) or (dead = true)
              R.hasbeenEaten(i,j) = true;
              //return that the wolf has eaten and rabbit dies
              return true;
            }
        }
      }
      else if(y > 479) //33 < x < 479 and y > 479
      {
        for(i = x - 33; i < x + 33; i++)
        {
          for(j = y - 33; j < 512; j++)
          {
            if(hasRabbit(i,j)
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
          }
        }
      }
      else //33 < x < 479 and y < 33
      {
        for(i = x - 33; i < x + 33; i++)
        {
          for(j = 0; j < y + 33; j++)
          {
            if(hasRabbit(i,j)
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
          }
        }
      }
    }
  }
  if(x < 33) 
  {
    if(y < 479 && y > 33) //x < 33 and 33 < y < 479
    {
      for(i = 0; i < x + 33; i++){
        for(j = y - 33; j < y + 33; j++){
          if(hasRabbit(i, j))
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
        }
      }
    }
    else if(y < 33) //x < 33 and y < 33
    {
      for(i = 0; i < x + 33; i++){
        for(j = 0; j < y + 33; j++){
          if(hasRabbit(i, j))
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
        }
      }
    }
    else //x < 33 and y > 479
    {
      for(i = 0; i < x + 33; i++){
        for(j = y - 33; j < y + 33; j++){
          if(hasRabbit(i, j))
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
        }
      }
    }
  }
  else //x > 479
  {
    if(y > 33 && y < 479) //x > 479 and 33 < y < 479
    {
      for(i = x - 33; i < 512; i++){
        for(j = y - 33; j < y + 33; j++){
          if(hasRabbit(i, j))
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
        }
      }
    }
    else if(y > 479) //x > 479 and y > 479
    {
      for(i = x - 33; i < 512; i++){
        for(j = y - 33; j < 512; j++){
          if(hasRabbit(i, j))
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
        }
      }
    }
    else //x > 479 and y < 33
    {
      for(i = x - 33; i < 479; i++){
        for(j = 0; j < y + 33; j++){
          if(hasRabbit(i, j))
            {
              R.hasbeenEaten(i,j) = true;
              return true;
            }
        }
      }
    }
  }

  return false;
}




SearchforGrass(int x, int y){

//should be the same as SearchforRabbit, but switch the 
//if(hasRabbit(i, j) to if(hasGrass(i, j)


}



*/
