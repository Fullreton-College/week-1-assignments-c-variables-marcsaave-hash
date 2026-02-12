#include <iostream>

using namespace std;

int main()
{
	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter height and width: ";
	/* write your code here */
	cin >> height; 
	cin >> width;
	// calculate area
	double area = height * width ;



	// write output to console

	cout << "Area is " << area << endl;




	// return value that indicates normal program exit
	cout << "Area has been calculated" << endl;
    return 0;
}

