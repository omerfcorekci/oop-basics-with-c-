#include <iostream>
using namespace std;
class excp : public exception{
	public:
		char * errorMsg(){
			return "denominator can't be 0'";
		}
};
class excp2 : public exception{
	public:
		char * errorMsg2(){
			return "0/0 is a wrong value";
		}
};
class numbers{
	protected:
		int a,b;
	public:
	numbers(int a, int b){
		this->a = a;
		this->b = b;
	}
	float division(){
		if(a == 0 && b == 0){
			throw excp2();
		}
		else if(b==0){
			throw excp();
		}
		else{
			cout << a/b << endl;;
		}
	}
	
};
int main(){
	int a,b;
	cin >> a >> b;
	numbers test(a,b);
	try{
		test.division();
	}catch(excp i){
		cout << i.errorMsg() << endl;
	}catch(excp2 k){
		cout << k.errorMsg2() << endl;
	}catch(exception e){
		cout << "an error occured" << endl;
	}
	return 0;
}
