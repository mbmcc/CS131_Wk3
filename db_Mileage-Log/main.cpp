#include <iostream>

using namespace std;

/*
Example
Enter miles driven (- 1 to quit): 287
Enter gallons used: 13
MPG this trip: 22.076923

Total MPG: 22.076923
*/

int main() {
	
	int miles = 0;
	int gallons = 0;
	float tripMPG = 0.0;
	float allTripsTotal = 0.0;
	int tripNumbers = 1;

	
	  while (miles  != -1) {
      cout << "Enter miles driven (-1 to quit): \n";
	   	cin >> miles; //int
			if (miles == -1)
	     break;

	   	cout << "Enter gallons used: \n"; //int
  		cin >> gallons;

      float tripMPG = miles / gallons;
  		cout << "MPG this trip: " << tripMPG << "\n"; //float
  
      allTripsTotal += tripMPG;
		  cout << "------------" << endl
		       << "Total MPG so far: " << allTripsTotal 
		       << endl;
      
      cout << endl;
	}
	return 0;
}
