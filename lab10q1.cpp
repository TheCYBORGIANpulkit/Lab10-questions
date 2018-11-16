#include<iostream>
using namespace std;
 //Defining class
class Box {
  public:
	  double length;   // Length of a box
	  double breadth;  // Breadth of a box
	  double height;   // Height of a box
	
	double getvolume(void); //function to store volume

	
	void setlength(double len); //funct for setting length
	void setbreadth(double bre);// funct for setting breadth
	void setheight(double hei); // funct for setting height
	
};
	Defintions for all the member functions
	void Box::setlength(double len){
		length = len;
}
	void Box::setbreadth(double bre){
		breadth = bre;
}
	void Box::setheight(double hei){
		height = hei;
} 

	double Box::getvolume(void){
	return length*breadth*height;
}
	//dEFINING DATA IN MAIN FUNCTION
int main(){
	 Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   //box 1 specification
   Box1.setlength(6.0); 
   Box1.setbreadth(7.0); 
   Box1.setheight(5.0);

   // box 2 specification
   Box2.setlength(12.0); 
   Box2.setbreadth(13.0); 
   Box2.setheight(10.0);
    
    cout<<"Volume of the Box 1 is "<< Box1.getvolume() <<endl;
    cout<<"Volume of the Box 2 is "<< Box2.getvolume() <<endl;
 	return 0;
}
    
    
    
    
    
 
 
 
 
 


	
	
	
