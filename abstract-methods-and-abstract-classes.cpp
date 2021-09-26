#include <iostream>
using namespace std;
class employee{ //Abstract class
	protected:
		int salary;
		int government_id;
	public:
		employee(int salary, int government_id){
			this->salary = salary;
			this->government_id = government_id;
		}
		virtual int salaryPayment()=0; // abstract method
		virtual int salaryAdvance(int advance)=0; // abstract method
};
class engineer: public employee{ // it's a abstract class bc employee's abstract methods doesn't privately defined in this class.
	public:
		engineer(int salary, int government_id):employee(salary,government_id){}
};
class softwareEngineer : public engineer{ // it isn't a abstract class bc salaryPayment and salaryAdvance methods defined in this class.
	public:
		softwareEngineer(int salary, int government_id):engineer(salary,government_id){}
	int salaryPayment(){
		return 7500;
	}
	int salaryAdvance(int advance){
		if(advance < salary/2)
			return advance;
		else
			return 0;
	}
};
int main(){
	softwareEngineer adam(10000,14056298);
	// engineer john(8000,2659874); this is not correct bc abstract classes can't hold any object.
	cout << adam.salaryAdvance(4000);
	return 0;
}
