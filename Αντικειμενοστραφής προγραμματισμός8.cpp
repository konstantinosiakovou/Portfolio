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
		double show(){
		return side*side;
		}		
	};				
   class Pyramid: public square{
	private:
	double height;	
	public:
	double getheight(){}
	double show(){
		return ((double)1/3)*side*side * height;
		}		
	pyramid::pyramid(){
		
	}	

};
int main(){	
 

cout<<"the result is:"<<math.show()<<endl;		
}
