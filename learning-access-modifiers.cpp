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
		void printSalary(){
			cout << "\nsalary : " << salary << endl;
		}
	private:
		int salary = 2000;
};

int main(){
	human john;
	john.height = 180;
    john.weight = 70;
    john.age = 20;
    cout << "john's height : " << john.height << "\njohn's weight : " << john.weight << "\njohn's age : " << john.age << endl; 
/*	john.salary = 500
	cout << "john's salary : "<< john.salary << endl;*/ // This is wrong argument.
	john.printSalary(); // true
	return 0;
}
