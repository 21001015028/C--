#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class\
    private:
    int real;
    int imag;
    public:
    ComplexNumbers(int r,int c){
        real=r;
        imag=c;
    }
    ComplexNumbers plus( ComplexNumbers &others){
        int newreal=real + others.real;
        int newimag=imag+ others.imag;
        return ComplexNumbers(newreal,newimag);
    }
     ComplexNumbers multiply(ComplexNumbers &others){
        int mulreal=real*others.real + imag*others.imag;
        int mulimag=imag*others.real + real*others.imag;
        return ComplexNumbers(mulreal,mulimag);
    }
    void print(){
        
      cout<<real<<"+"<<"i"<<imag<<endl;   
    }


};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}