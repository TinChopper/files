#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
	//create some data
	short int a = -6730;
	float b = 68.123; 
	char c = 'J';
	
	ofstream myfile ("abc.txt");
	if (myfile)
	{
		myfile << a << " " << b << " " << c << endl;
	}
	else
		cout <<" Error Opening abc.txt";
		
	myfile.close ();	 
		
	return 0;
}
