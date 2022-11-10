#include <iostream>

using namespace std;

class Rectangle {
	private:
		float length, width;
	public:
		void setlength(float len){
			length = len;
		}
		void setwidth(float wid){
			width = wid;
		}
		float perimeter(){
			return (width*2) + (length*2);
		}
		float area(){
			return length*width;
		}
		void show(){
			cout<<"length: "<< length<<" width: "<< width<<endl;
		}
		int sameArea(Rectangle rect){
			if(rect.area() == this->area())
				return 1;
			else
				return 0;
		}
	};
	
	int main(){
		Rectangle r1, r2;
		r1.setlength(5);
		r1.setwidth(2.5);
		r2.setlength(5);
		r2.setwidth(18.9);
		r1.show();
		cout<<"r1 perimeter: "<< r1.perimeter()<<endl;
		cout<<"r1 area: "<<r1.area()<<endl;
		r2.show();
		cout<<"r2 perimeter: "<<r2.perimeter()<<endl;
		cout<<"r2 area: "<<r2.area()<<endl;
		if(r1.sameArea(r2))
			cout<<"same area";
		else
			cout<<"not same area";
		r1.setlength(15);
		r1.setwidth(6.3);
		r1.show();
		cout<<"r1 perimeter: "<<r1.perimeter();
		cout<<"r1 area: "<<r1.area();
		if(r1.sameArea(r2))
			cout<<"same area";
		else
			cout<<"not same area";
		return 1;
		}

