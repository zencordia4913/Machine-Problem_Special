#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int perfectsquare, i, divisible, u, v, prfctsqr;
	double b,c, d;
	bool q = false;
	char ans;

	cout << "Machine Problem 1" << endl;
	cout << "----------------- \n\n" << endl;
	cout << "The polynomial form is: x^2 + [b] + [c] \n\n";
	cout << "The factored from is: (x + u)(x + v) \n\n";       //Explaining The program 


do {

			cout << "Please insert values \n\n" << endl; //Inserting valuse of b and c
			cout << "x^2 + [b] x + [c] \n\n";
			cout << "b: " << flush;
			cin >> b;
			cout << "c: " << flush;
			cin >> c;
			cout << "\n\n";
			cout << "The equation is: x^2 + (" << b << ")x + (" << c << ") \n\n";
			u = (-b + sqrt(b*b  - 4*c))/2*-1;           //formula for u
			v = (-b - sqrt(b*b  - 4*c))/2*-1;           //formula for v  
			d= (b*b) - 4*c;

			for (i=1; i <= d ; i++)   //Looping to know if b^2-4c is a square of an integer
			{
				if (i*i == d) 
				{
					perfectsquare = 1; //If its a perfect square then perfectsquare=1
					break;
		
				}

				else if (i*i > d)
				{
					perfectsquare = 0; //If its not a perfect square then perfectsquare=0
					break;
		
				}
			}

			if ( u % 2 == 0 && v % 2 == 0) //If statement to know if u and v are divisible by 2
			{
				divisible = 1;  //If divisible, divisible=1
			}
			else 
				divisible = 0;  //If not divisible, divisible=0


			if ( b > 0) //For perfect square trinomials only
			{
				prfctsqr = 1; //If b is negative 
			}
			else if (b < 0)
			{
				prfctsqr = 0; //If b is positive
			}








			if (  d<0) //if b^2-4c is less than zero
			{
				cout << "The polynomial is not factorable " << endl;
				cout << "u and v are complex number" << endl;
		
			}
	
			else if (d>0) //If b^2-4c is greater than zero
			{
				switch (perfectsquare)
				{
					case 0: //If b^2-4c is not a perfect square of an integer
					cout << "u and v are not integers" << endl;
					cout << "The polynomial is not factorable " << endl; 
					break;
					case 1: //If b^2-4c is a perfect square of an integer
				
				{
					if (divisible =0) //If u and v are not divisible by 2
					{
						cout << "u and v are not integers" << endl;
						cout << "The polynomial is not factorable " << endl;
					}
					else if (divisible = 1) //If u and v are divisible by 2
					{ 
				   
					   if ( b > 0 && c > 0)
					   {

						cout << "The factored polynomial is: (x + " << u << ")(x + " << v << ")" << endl;
					   }
					   else if ( b < 0 && c > 0)
					   {
				
						cout << "The factored polynomial is: (x" << u << ")(x" << v << ")" << endl;
					   }
					   else if ( b > 0 && c < 0)
					   {
	
						cout << "The factored polynomial is: (x" << u << ")(x + " << v << ")" << endl;
					   }
					   else 
					   {
	
						cout << "The factored polynomial is: (x" << u << ")(x + " << v << ")" << endl;
					   }

					}
		
				}
				break;		
			  }
			}
			
			else //For perfect square Trinomial
			{
				
				int f= sqrt(c); 
				switch (prfctsqr)
				{
				case 1: //If b is positive
						{
							cout << "The factored polynomial is: (x + " << f << ")^2 or (x + " << f << ")(x + " << f << ")" << endl;
						    break;
						}
				case 0: //If b is negative
                        {
							cout << "The factored polynomial is: (x - " << f << ")^2 or (x - " << f << ")(x - " << f << ")" << endl;
						    break;
						}
				default:
					   cout << "SYNTAX ERROR!! "<< endl;
					   break;

				}
			}



  cout << "\n\n";
  cout << "The operation has ended: [R] Retry [E] Exit: " << flush;
  cin >> ans;
  cout << "\n\n";
	switch (ans)
	{
			case 'r':
			case 'R':
			{
				q = false;
				cout << "\n\n";
				break;
			}



			case 'e':
			case 'E':
			{
				cout << "Exiting............." << endl;
				cout << " \n\n";
				q = true;
				break;
			}
		

			default:
			{
				q = true;
				cout << "Please enter a correct letter" << endl;
				cout << " " << endl;
				cout << "Exiting..........." << endl;
				cout << "\n\n";
				
			}
	}
   
}while (!q);
system("pause");
return 0;
}