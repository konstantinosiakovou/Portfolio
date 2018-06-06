#include <iostream>
using namespace std;
class Vehicle{
	private: int Power; int Speed;
	public:
	void show()=0;
	Vehicle(){Power=0; Speed=0;}
	Vehicle(int p, int s){p=Power; s=Speed;}
	int set_power(double P, double S){p=Power;}
	int get_power(){return Power;}
	int set_speed(){s=Speed;}
	int get_speed(){return Speed;}
};
Vehicle::operator++(const Vehicle &Wagons){
	return waggons++;
}
Vehicle::operator--(const Vehicle &Wagons){
	return
}
class Car: public Vehicle{
  private: int Doors;
  public:
  	static int count=0;
  	double function(int in){
  		return (Doors/in);}
};
class Train: public Vehicle{
private: int Wagons;
	public:
};
int main(){
	Vehicle *ddd=new Vehicle;
	cout<<"results are:"<<ddd
	cout<<""<< <<endl;
	cout<<""<< <<endl;
	cout<<""<< <<endl;		
}
//Να υπερφορτωθεί ο τελεστής «++» και ο «--» ώστε να αυξάνονται 
//αλλά και να μειώνονται τα βαγόνια για τα αντικείμενα του τραίνου. 
//Δεκτές τιμές (0-10).
