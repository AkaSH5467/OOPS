#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
     int health;
    public:
   char name[100];
    
    int level;

    void sethealth(int h)  //setter
    {
        health=h;
    }

    void setlevel(int l) //setter
    {
        level=l;
    }

    int gethealth() //getter
    {
        
      return health;
    }

    int getlevel() //getter
    {
        return level;
    }

    
};


int main()
{
    /*Hero h1;
    cout<<"Size : "<<sizeof(h1)<<endl;
    //h1.setdata();
    cout<<"Health is : "<<h1.gethealth();
    //cout<<"Level : "<<h1.level<<endl;*/


    //static Allocation
    Hero h1;
    h1.sethealth(30);
    cout<<"Health is "<<h1.gethealth()<<endl;

    
    //dynamic Allocation
    Hero *h2 = new Hero;
    (*h2).sethealth(23);
    cout<<"Health is "<<(*h2).gethealth()<<endl;


}