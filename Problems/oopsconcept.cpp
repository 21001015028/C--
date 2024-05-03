#include<iostream>
using namespace std;
class hero{
    private :
    int health;
    public:
    int level;

    void print(){
        cout<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(int l){
        level=l;
    }


};
int main(){
    hero a;

    //statically
   a.sethealth(21);
   a.setlevel(4);
   cout<<a.gethealth()<<endl;
   cout<<a.getlevel()<<endl;

   //dynamically
   hero *b=new hero;
   b->sethealth(22);     //this operator
   
   cout<<"b->"<<b->gethealth()<<endl; 
   cout<<(*b).gethealth()<<endl; 
    return 0;

}