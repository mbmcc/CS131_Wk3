#ifndef MilesPerGallon_H
#define MilesPerGallon_H
#include <iostream>
//Function Declarations for the MPG class
class MPG
  public:
    MPG(); //default
    MPG(int,int); //overload (No. Miles, No Gallons)
    ~MPG //deconstructor
    
    
  private:
    //Member Variables
    double milesDriven = 0;
	  double gallonsUsed = 0;
  	double tripMPG = 0.0;
	  double allTripsTotal = 0.0;

#endif