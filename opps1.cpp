#include<iostream>
using namespace std;

class Hero{

private:
	int health;
	char level;

public:

	Hero(int health){
		this->health = health;
	}

	void print(){
		cout <<level<<endl;
	}

	int getHealth(){
		return health;
	}

	void setHealth(int h){
		health = h;
	}
};

int main(){
	Hero Raavan(100);
	cout<<Raavan.getHealth()<<endl;
}