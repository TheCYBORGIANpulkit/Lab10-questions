#include<iostream>
using namespace std;
//defining the class with name Point
class Point {
	private:
	int abcissa;//declaring the x coordinate of the point
	int ordinate; //declaring the y coordinate of the point
	
	//declaring the member functions
	void setx(int abc);
	void sety(int ord);
	void print(void);
	double getx(int abc);
	double gety(int ord);
};
	
	//defining the member functions
	void Point::setx(int abc){
		abcissa = abc;
	}

	void Point::sety(int ord){
		ordinate = ord;
	}

	void Point::print(void){
		cout<< "(" << abcissa <<","<< ordinate <<")"<<endl;
	}
	
	double Point::getx(int abc){
		return abc;
	}
	
	double Point::gety(int ord){
		return ord;
	}
	
	
/*int main(){
	Point point1; //declaring the point of same class type
	
	//point1 specs
	point1.setx(2);
	point1.sety(3);
	
	
	cout<< "The coordinates of the given point is "<<endl;
	point1.print();
	return 0;
} 
*/

class Rectangle {
	private: 
	 int side1(){
	 	return p2.getx()-p1.getx();
	 }
	 
	 
	 int side2(){
	 	return p4.gety()- p1.gety();
	 }
	 	
	//defining the objects of point type
	private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;
	
	Rectangle (){
		p1.setx(0);
		p1.sety(0);
		p2.setx(1);
		p2.sety(0);
		p3.setx(1);
		p3.sety(1);
		p4.setx(0);
		p4.sety(1);
	}
	
	Rectangle (point 1, point 2){
		p1.setx(p1.getx);
		p1.sety(p1.gety);
		p2.setx(p3.getx);
		p2.sety(p1.gety);
		p3.setx(p3.getx);
		p3.sety(p3.gety);
		p4.setx(p1.getx);
		p4.sety(p3.gety);
		
	}
	void print(void);
};
	//defining the member function print
	void print(){
		p1.print();
		p2.print();
		p3.print();
		p4.print();
	}
		
int main(){
	
	Point p1;
	Point p3;
	
	int a,b,c,d;	
	cout<< "Please input the abcissa of the first vertex of the rectangle" <<endl;
	cin>> a >> b >> c >> d;
	
	p1.setx(a);
	p1.sety(b);
	p3.setx(c);
	p3.sety(d);
	
	Rectangle(point p1, point p2);
	return 0;
}	
	
	
	



