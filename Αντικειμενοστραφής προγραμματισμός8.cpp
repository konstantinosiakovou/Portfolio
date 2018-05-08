#include <iostream>
using namespace std;
class square
{
	protected: double side;
	public:
		square();
		~square();
 		void setheight(double){}
		void setwidth(double){}
		double getheight(){}
		double getwidth(){}
		double show(double e_base,double height){
		return (1/3) * e_base * (side*side) * height;
		}		
	};				
   class Pyramid: public square{
	private:
	double getheight(){}
	double showtwo(double e_base,double height){
		return (1/3) * e_base * (side*side) * height;
		}		
	square::square(){
		square *pyramid1=new square[0];
		square *pyramid2=new square[0];
	}	
	square::~square(){
		delete pyramid1;
		delete pyramid2;
	}
};
int main(){	
 

cout<<"the result is:"<<math.show()<<endl;		
}
