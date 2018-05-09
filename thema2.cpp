#include <iostream>
using namespace std;
class cirlce{
	protected: double radius;
	public:
		circle(){radius=0;}
		void setheight(double){}
		void setradius(double){}
		void setvolume(double){}
		double getheight(){}
		double getradius(){}
		double getvolume(){}
		double show(){
		return 3.14*radius;
};
class cylinder: public circle{
	private:
	double height;
	public:
		cylinder(){radius=0; height=0;}
		cylinder(double x, double y){radius=x; height=y;}
		
	double show(){
		return (3,14*radius*radius); 		 
		}		
	};
	double operator+(const cylinder &h){
		
		 return show()+1;
	}		
	int main(){
		cylinder *cylinders=new cylinder[2];
		cylinder *c1=new cylinders(3.6,5.4);
		cylinder *c2=new cylinders(3.5,3.5)
		
		
		delete cylinders;
		delete cylinders;

		return 0;		
	}
