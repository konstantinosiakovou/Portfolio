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
		pyramid=new pyramids1[0];
		pyramid2=new pyramids2[0];
	}	
	square::~square(){
		delete pyramid;
		delete pyramid2;
	}
};
int main(){	
square *math=new square;
math.setheight(0);
math.setwidth(0);
cout<<"the result is:"<<math.show()<<endl;		
}
