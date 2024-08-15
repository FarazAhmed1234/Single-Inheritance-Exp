#include <iostream>
using namespace std;

class Triangle{
    public:
    void getdata(){
        cout<<"I am a triangle "<<endl;
    }
};

class derived_triangle : public Triangle{
    public:
    void derived_data(){
    cout<<"I am an isosceles triangle"<<endl;
    cout<<"In an isosceles triangle two sides are equal "<<endl;
    
    getdata();
    }
};


int main(){
    derived_triangle obj;
    obj.derived_data();
}