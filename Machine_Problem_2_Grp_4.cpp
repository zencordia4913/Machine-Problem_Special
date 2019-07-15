#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int cone (double r, double h) //Function for cone shape
{
	const double pi = 3.14159;
	double v = pi * r * r * h / 3;
	double LA = pi * r*(sqrt((h*h) + (r*r)));
	double BA = pi * r * r;
	double SA = pi * r*(r + sqrt((h * h) + (r*r)));
	
	cout << "\nVolume of the Cone: " << v << " cubic units";
	cout << "\nLateral Area of the Cone: " << LA << " squared units";
	cout << "\nBase Area of the Cone: " << BA << " squared units";
	cout << "\nSurface Area of the Cone: " << SA << " squared units";
	return 0;
}
int pyramid (double l, double w, double h) //Function for pyramid shape
{
	const double pi = 3.14159;
	double v = l * w * h / 3;
	double LA = (l * (sqrt(((w / 2)*(w / 2)) + h * h))) + (w * (sqrt(((l / 2)*(l / 2)) + h * h)));
	double BA = l * w;
	double SA = (l * w) + (l * (sqrt(((w / 2)*(w / 2)) + h * h))) + (w * (sqrt(((l / 2)*(l / 2)) + h * h)));
	
	cout << "\nVolume of the Pyramid: " << v << " cubic units";
	cout << "\nLateral Area of the Pyramid: " << LA << " squared units";
	cout << "\nBase Area of the Pyramid: " << BA << " squared units";
	cout << "\nSurface Area of the Pyramid: " << SA << " squared units";
	return 0;
}
int sphere (double r) //Function for sphere shape
{
	const double pi = 3.14159;
	double v = (1.333333) * pi * (r * r * r);
	double SA = 4 * pi * (r * r);
	
	cout << "\nVolume of the Sphere: " << v << " cubic units";
	cout << "\nSurface Area of the Sphere: " << SA << " squared units";
	return 0;
}
int main()
{
	double r, h, l, w;
	char shape, choice;   
	bool exit = false;  //For the looping of "continue?"
	
	cout << "GEOMETRIC CALCULATOR V1\n";   //Choices for shapes
	cout << "C - CONE\n";
	cout << "P - PYRAMID\n";
	cout << "S - SPHERE\n";
	
	do
	{
		cout << "\n\nChoose a figure: "; 
		cin >> shape; //Input of choice
		
		switch (shape)
		{
			case 'C': //For cone shape
			case 'c':
			{
				cout << "\nInput radius: ";
				cin >> r;
				cout << "Input height: ";
				cin >> h;
			
				cout << cone (r, h) << endl; //Calling cone function
				break;
			}
			case 'P':
			case 'p': //For Pyramid shape
			{
				cout << "\nInput length: ";
				cin >> l;                        
				cout << "Input width: ";
				cin >> w;
				cout << "Input height: ";
				cin >> h;
				
				cout << pyramid (l, w, h) << endl; //Calling pyramid function
				break;
			}
			case 'S':
			case 's': //For sphere shape
			{
				cout << "\nInput radius: ";
				cin >> r;
				
				cout << sphere (r) << endl; //calling sphere function
				break;
			}
			default: //For invalid input of letter
			{
				cout << "\nINVALID FIGURE!!";
				break;
			}	
		}
		
		cout << "\n\nDo you want to continue(Y/N)? "; //continue? function
		cin >> choice;
		cout << endl;
		
		switch(choice)
		{
			case 'Y':
			case 'y':
			{
				exit = true; //retry
				break;
			}
			case 'N':
			case 'n':
			{
				cout << "Exiting...." << endl; //exit
				exit = false;
				break;
			}
			default:
			{
				cout << "Input is invalid."; //invalid input
				exit = false;
			}
		}
	}while(exit != false);
	
	getch();
	return 0;
}