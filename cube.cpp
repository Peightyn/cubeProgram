// cube.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Peightyn Boyd
//Date: 9/28/2022
//Program Title:cube
//Program Description: Using the Switch Case Method to give the user the option of which task they want to complete, in the calculations related to a box. 

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std; 

//Named Constants 

int main()
{
	//Variable Declarations 
	int choice;
	double sideLength, perimeter, surfaceArea1, surfaceArea2, volume;
	//surfaceArea1: Finding the Surface Area for One side of the Box
	//surfaceArea2: Finding the Surface Area for the Entire Box

	//Program Title and Description for the User 
	cout << "Program Title: \'cube\'" << endl;
	cout << "Program Description: Using the Switch Case Method to give the user the option of " << endl;
	cout << "which task they want to complete, in the calculations related to a box." << endl;
	cout << endl << endl;

	//User Input
	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Perimeter of One Side of the Box" << endl;
	cout << "2 - Surface Area of One Side of the Box" << endl;
	cout << "3 - Surface Area of the Entire Box" << endl;
	cout << "4 - Volume of the Box" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << endl << endl; 



	// Output to the screen

	switch (choice)
	{
	case 1:
		//User Input for Task #1
		cout << "Perform task #1 : Perimeter of One Side of the Box" << endl;
		cout << "Enter the Side Length of the Box: ";
		cin >> sideLength;
		cout << endl; 

		//Calculations for Task #1
		perimeter = sideLength * 4;

		//Output to the Screen; for Task #1
		cout << "Side Length of the Box: " << sideLength << " Centimeters" << endl;
		cout << "Perimeter of One Side of the Box: " << perimeter << " Centimeters" << endl;

		break;

	case 2:
		//User Input for Task #2
		cout << "Perform task #2 : Surface area of One side of the Box" << endl;
		cout << "Enter the Side Length of the Box: ";
		cin >> sideLength;
		cout << endl; 

		//Calculations for Task #2
		surfaceArea1 = (sideLength * sideLength);

		//Output to the Screen; for Task #2
		cout << "Side Length of the Box: " << sideLength << " Centimeters" << endl;
		cout << "Surface Area of One Side of the Box: " << surfaceArea1 << " Centimeters Squared" << endl;
		break;

	case 3:
		//User Input for Task #3
		cout << "Perform task #3 : Surface Area of the Entire Box" << endl;
		cout << "Enter the Side Length of the Box: ";
		cin >> sideLength;
		cout << endl; 

		//Calculations for Task #3
		surfaceArea2 = (sideLength * 2) * 6;

		//Output to the Screen; for Task #3
		cout << "Side Length of the Box: " << sideLength << " Centimeters" << endl;
		cout << "Surface Area of the Entire Box: " << surfaceArea2 << " Centimeters Squared" << endl;
		break;

	case 4:
		//User Input for Task #4
		cout << "Perform task #4 : Volume of the Box" << endl;
		cout << "Enter the Side Length of the Box: ";
		cin >> sideLength;
		cout << endl; 

		//Calculations for Task #4 
		volume = sideLength * sideLength * sideLength;

		//Output to the Screen; for Task #4 
		cout << "Side Length of the Box: " << sideLength << " Centimeters" << endl;
		cout << "Volume of the Box: " << volume << " Centimeters Cubed" << endl;
		break;

	default:
		cout << "Input error; program is terminating" << endl;

		return 0;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
