#include <iostream>
#include "Products.h"

//Function Definitions of the Products Class
//Default Constructor
Products::Products() { 
  newName;
  newPrice =0.00;
}

//Overload Constructor
Products::Products(std::string, int) { 
  newName = name;
  newPrice = price;
}

//Destructor
Products::~Products() { 
  
}

// using accessor functions
std::string Products::getName() const {
    return newName;
}
double Products::getPrice() const {
    return newPrice:
}
void Products::setName(std::string) {
    name = newName;
}
void Products::setPrice(double price) {
    price = newPrice;
}

        

 
