/********************************************************************************  
*  Program Name: Progamming Assignment 1
*  Created Date: 8/23/21  
*  Created By: Shyanna Shearer 
*  Purpose: To tell the user their weight on other planets.  
*  Acknowledgements:
******************************************************************************/

#include <iostream> //Preprocessor directive to include iostream library.
#include <iomanip> //Preprocessor directive to include iomanip library.
using namespace std; //Allows for use of contents in iostream library.

/********************************************************************************
*  Function Name: main()
*  Parameters: None
*  Return Value: int
*  Purpose:
*******************************************************************************/

//Declares type of function and indicates code written between {} is a function. 
int main()
{
	//Stores users weight in floating point.
	double userWeight = 0;

	//Sets constants to calculate weight on each planet.
	const double MERCURY = 0.38, VENUS = 0.91, EARTH = 1.00, MARS = 0.38, JUPITER = 2.34, SATURN = 1.06, URANUS = 0.92,
		NEPTUNE = 1.19, PLUTO = 0.06, MOON = 0.166, SUN = 27.00;

	//Displays on the screen to ask users weight
	cout << "Do you ever wonder how much you would weigh on other planets? Enter your weight to find out!\n"; 

	//Set flags for the input-output stream to format the output to 2 decimal places, always shown even if it is .0
	cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);

	//Allows user to enter weight, uses defined varaible to store users weight.
	cin >> userWeight;

	//Displays string literal on screen. 
	cout << "Here is how much you would weigh on each planet:\n"; 

	//Displays blank space to allow user a space to enter their weight.
	cout << endl; 

	//Displays on screen how much user would weigh on each planet. Setw places text shown on screen in determined spot.
	cout << setw(20) << "MERCURY" << setw(15) << userWeight * MERCURY << endl;
	cout << setw(20) << "VENUS" << setw(15) << userWeight * VENUS << endl;
	cout << setw(20) << "EARTH" << setw(15) << userWeight * EARTH << endl;
	cout << setw(20) << "MARS" << setw(15) << userWeight* MARS << endl;
	cout << setw(20) << "JUPITER" << setw(15) << userWeight * JUPITER << endl;
	cout << setw(20) << "SATURN" << setw(15) << userWeight* SATURN << endl;
	cout << setw(20) << "URANUS" << setw(15) << userWeight* URANUS << endl;
	cout << setw(20) << "NEPTUNE" << setw(15) << userWeight* NEPTUNE << endl;
	cout << setw(20) << "PLUTO" << setw(15) << userWeight* PLUTO << endl;
	cout << setw(20) << "MOON" << setw(15) << userWeight* MOON << endl;
	cout << setw(20) << "SUN" << setw(15) << userWeight* SUN << endl;

	//Sends integer value back to 0 upon competion of program.
	return 0;
}