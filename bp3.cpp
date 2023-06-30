#include<iostream>
#include<string.h>
using namespace std;


class collage
{
    	public :
		int id;
		char name[100];
		int roll_number;
		int stnder;
		int contect;
		int age;
		char instiude_name[100];
		char addres[100];
		
		
};
		
class high_school
{
    	public :
		int id;
		char name[100];
		int roll_number;
		int stnder;
		int contect;
		int age;
		char instiude_name[100];
		char addres[100];
		
};


char collage::address[100]="sdj international ";
char high_school::address[100]="raja_ram ";

int main()
{
	collage c1;
	high_school h1;
	
	c1.id = 254;
	c1.per = 81.71;
	cout<<collage::clg<<endl;
	cout<<"id = "<<c1.id<<endl;
}