#include<bits/stdc++.h>
using namespace std;

//creation of class
class Animal{
    //poperties
    private:
    int weight;
    public:
    int age;
    string name;

    //default constructor
    Animal(){
        this->age=0;
        this->weight=0;
        this->name=" ";
    }

    //parametrized constructor
    Animal(int age){
        this->age=age;
        cout<<"parameterized constructor called"<<endl;
    }
    //copy constructor
    Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        cout<<"copy constructor called"<<endl;
    }

    //behaviour
void eat(){
    cout<<"eating"<<endl;

}
void sleep(){
    cout<<"sleeping"<<endl;

}
int getWeight(){
    return weight;
}
void setWeight(int w){
    weight=w; 
}

};



int main(){
    //object creation
    //static
    // Animal babu;
    // babu.age=12;
    // babu.name="lion";
    // cout<<"the age of babu is:"<<babu.age<<endl;
    // cout<<"the name of babu is:"<<babu.name<<endl;
    // babu.eat();
    // babu.sleep();

    // //to acces the private members
    // babu.setWeight(101);
    // cout<<"the weight of babu is :"<<babu.getWeight()<<endl;


    //dynamic
    // Animal *suresh=new Animal;
    // (*suresh).age=12;
    //  (*suresh).name="kutta";
    //  //alternate
    //  suresh->age=12;
    //  suresh->name="billi";

    //  suresh->eat();
    //  suresh->sleep();

    Animal a(10);
    Animal* b=new Animal(101);

    Animal c=a;
    Animal animal(c);
    
    return 0;
}