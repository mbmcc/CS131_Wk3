#ifndef Products_H
#define Products_H
#include <iostream>

// Function Declarations of the Products class
class Products {
    public:
        // Constructors
        Products();
        Products(std:string, int);
        ~Products();
        // Accessor functions
        std::sring getName() const;

        double getPrice() const;
        
        // Mutator functions
        void setName(std::string);

        void setPrice(double);


    private:
        // Member variables
        std::string newName
        double newPrice
};
#endif
