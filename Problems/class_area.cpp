#include <iostream>
using namespace std;
class Rectangle {
    private:

    int length;
    int breadth;
    public:
    Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    
    
    
      int getarea(){
        return length*breadth;
    }
};
int main(){
    int a;
    int b;
    Rectangle r(a,b);
    cin>>a>>b;
   cout<< r.getarea()<<endl;
    return 0;
}

