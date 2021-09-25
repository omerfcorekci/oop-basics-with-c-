#include <iostream>
using namespace std;
class shape{
	protected:
		int height;
		int widht;
	public:
		shape(int height, int widht){
			this->height = height;
			this->widht = widht;
		}
		int getHeight(){
			return height;
		}
		void setHeight(int height){
			this->height = height;
		}
		int getWidht(){
			return widht;
		}
		void setWidht(int widht){
			this->widht = widht;
		}
		virtual int areaOfShape(){
			return 0;	
		}
};
class rectangle: public shape{
	public:
		rectangle(int height,int widht):shape(height,widht){}
		int areaOfShape(){ //override
			return height * widht;
		}
		
};
class triangle: public shape{
	public:
		triangle(int height, int widht):shape(height,widht){}
		int areaOfShape(){ //override
			return (height * widht)/2;
		}
};
int main(){
	rectangle exp1(100,80);
	triangle exp2(50,40);
	cout << "area of rectangle : " << exp1.areaOfShape() << "\narea of triangle : " << exp2.areaOfShape() << endl;
	shape *s;
	s = &exp2;
	cout << "area of triangle : " << s->areaOfShape() << endl;
	shape x(40,50);
	cout << "area of shape : " << x.areaOfShape() << endl;
	return 0;
}
