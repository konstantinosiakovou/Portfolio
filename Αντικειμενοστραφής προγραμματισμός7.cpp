#include <iostream>
using namespace std;
class Player{
	protected: 
	int weight;
	int height;
	void getweight(){
		return weight;
	}	
	void getheight(){
		return height;
	}	
	
	public:
	
	void setheigh();
	void setweight();
	void print();
	class Human:public Player{
	public:
	int getp_power();
	void setp_power(int pp);
	Human(int,int,int);	
	void printpp();
	private:
		int m_power;
	};
	Human::Human(int w,int h,int p);
		{
		height=h;
		weight=w;
		p_power=p;
		}
	class Elf:public Player{
		private:
			int m_power;
		public:
		int getm_power();
		void setm_power(int mp);
		Elf(int,int,int);	
		void printmp();			
	};
	Elf::Elf(int y, int x, int z)
	{
		height=y;
		weight=x;
		m_power=z;	
	}
	

	
};



