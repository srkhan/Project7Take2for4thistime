#include <functional> 
#include <queue> 
#include <vector> 
#include <iostream>
#include <cstdlib>
#include "Item.h"
#include "Grassland.h"
#include "Animal.h"
#include "Wolf.h"
#include "Rabbit.h"
//i am not sure if we need to include lazy and active
using namespace std;
//we can also put grassland here if you want

int main(int argc, char* argv[])
{
  if(argc <= 2 || argc >=4) //4 //2
  {
    cout<<"error"<<endl;
  }
  else{
    int wolf = atoi(argv[1]);
    int rabbit = atoi(argv[2]);
   
    int arabbit = rabbit/2;
    
    int lrabbit = rabbit/2;
    
   
  priority_queue<Item*, vector<Item*>, compareItem> q;
        
      Item* temp;
      for(int i = 0; i< arabbit; i++)
      {
       int xCoord = rand() % 512;
       int yCoord = rand() % 512;  
        temp = new ActiveRabbit(0, xCoord, yCoord, &q);//make
        temp -> key = 0;
        q.push(temp);
      }
       for(int i = 0; i< lrabbit; i++)
      {
        int xCoord = rand() % 512;
        int yCoord = rand() % 512;
        temp = new LazyRabbit(0, xCoord, yCoord, &q);//make
        temp -> key = 0;
        q.push(temp);
      }

      for(int j = 0; j< wolf; j++)
      {
       int xCoord = rand() % 512;
       int yCoord = rand() % 512;
        temp = new Wolf(0, xCoord, yCoord, &q);//make
        temp -> key = 0;
        q.push(temp);
      }

        
        while(!q.empty()){
          temp = q.top();
          temp -> Run();
          q.pop();
        }
        

      }
        //give report of sim. stats
        //object.report() this part we might not need later*/
  

}
