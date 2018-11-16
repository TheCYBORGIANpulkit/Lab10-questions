#include<iostream>
using namespace std;
//defining the class with name Point
class Point {
	public:
	double abcissa;//declaring the x coordinate of the point
	double ordinate; //declaring the y coordinate of the point
	
	//declaring the member functions
	void setx(double abc);
	void sety(double ord);
	void print(void);
};
	
	//defining the member functions
	void Point::setx(double abc){
		abcissa = abc;
	}

	void Point::sety(double ord){
		ordinate = ord;
	}

	void Point::print(void){
		cout<< "(" << abcissa <<","<< ordinate <<")"<<endl;
	}
	
int main(){
	Point point1; //declaring the point of same class type
	
	//point1 specs
	point1.setx(2);
	point1.sety(3);
	
	
	cout<< "The coordinates of the given point is "<<endl;
	point1.print();
	return 0;
} 
