#include <iostream>
using namespace std;
class meal{
	public:
		int kcal;
		int price;
		int weight;
		void heatUpFood(int time){
			if(time<=300)
				kcal+=time;
			else
				kcal=0;
		}
};
class human{
	public:
		float weight;
		int height;
		int age;
		void eating(meal y){
			weight += (float) y.kcal/7000;
		}
};

int main(){
	meal sandwich;
	sandwich.kcal = 233;
	sandwich.price = 10;
	sandwich.weight = 100;
	human john;
	john.height = 180;
    john.weight = 70;
    john.age = 20;
    human adam;
    adam.height = 190;
    adam.weight = 85;
    adam.age = 25;
    cout << "john's height : " << john.height << "\njohn's weight : " << john.weight << "\njohn's age : " << john.age << endl; 
    john.eating(sandwich);
    cout << "john's height : " << john.height << "\njohn's weight : " << john.weight << "\njohn's age : " << john.age << endl; 
    cout << "adam's height : " << adam.height << "\nadam's weight : " << adam.weight << "\nadam's age : " << adam.age << endl;
	sandwich.heatUpFood(100); 
    adam.eating(sandwich);
    cout << "adam's height : " << adam.height << "\nadam's weight : " << adam.weight << "\nadam's age : " << adam.age << endl; 
	return 0;
}
