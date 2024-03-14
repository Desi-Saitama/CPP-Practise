#include<iostream>
using namespace std;


/*Inheritace*/

class Human{
	int height;
	int weight;
	int age;

public:
	int getAge(){
		return age;
	}
	void setAge(int h){
		age = h;
	}
};

class Male: public Human{
public:
	string	color;

	void sleep(){
		cout<<"sleep"<<endl;
	}
};

/*Encapsulation: Data + Methods are hidden together*/
class Students{
private:
	string Name;
	int age;
	int height;

public:
	int getAge(){
		return this->age;
	}
};

int main(){
	Male m1;
	int a = 90;
	m1.setAge(a);
	cout <<m1.getAge();
}