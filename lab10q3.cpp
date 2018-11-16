#include<iostream>
using namespace std;
//Defining Class with name RECT
	class RECT {
		public:
	double length;	//declaring legth of a box;
	double breadth;	//declaring breadth of a box;
	
	//Member functuions declarartions
	void setlength(double l);
	void setbreadth(double b);
	
	double getarea( void);
	double getperimeter(void);
};
	//Member functions definitions
	void RECT::setlength(double l){
		length = l;
	}
	void RECT::setbreadth(double b){
		breadth = b;
	}
	
	double RECT::getarea(void){
		return length*breadth;
	}
	
	double RECT::getperimeter(void){
		return 2*(length+breadth);
	}
	//defining the main function	
int main(){
	//declaring two rectangles of the same class
	RECT Rect1;		
	RECT Rect2;
	
	//declaring variables for getting dimensions of the first rectangle
	int len, bre;
	cout<< "Please enter the length and breadth of the first rectangle: "<< endl;
	cin >> len>> bre;
	
	//rect1 specifications
	Rect1.setlength(len);
	Rect1.setbreadth(bre);
	
	double area1 = Rect1.getarea();
	double peri1 = Rect1.getperimeter();
	cout<< "The area of the first rectangle is "<< area1 << endl;
	cout<< "The perimeter of the first rectangle is "<< peri1 <<endl;
	
	//declaring variables for getting dimensions of the second rectangle
	int len1, bre1;
	cout<< "Please enter the length and breadth of the second rectangle: "<< endl;
	cin >> len1>> bre1;
	
	//rect2 specifications
	Rect2.setlength(len1);
	Rect2.setbreadth(bre1);
	
	double area2 = Rect2.getarea();
	double peri2 = Rect2.getperimeter();
	
	cout<< "The area of the second rectangle is "<< area2 << endl;
	cout<< "The perimeter of the second rectangle is "<< peri2 <<endl;
	return 0;
}












