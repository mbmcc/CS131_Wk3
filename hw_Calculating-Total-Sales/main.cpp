
// ## (Calculating Total Sales) 
// # A mail order house sells five different products whose retail prices are: 
//  + product 1 — $ 2.98, 
//  + product 2—$ 4.50, 
//  + product 3—$ 9.98, 
//  + product 4—$ 4.49 and 
//  + product 5— $ 6.87. 
// 
// Write a program that reads a series of pairs of numbers as follows: 
// a) product number 
// b) quantity sold 
//  + Your program should use a switch statement to determine the retail price for each product. 
//  + Your program should calculate and display the total retail value of all products sold. 
//  + Use a sentinel-controlled loop to determine when the program should stop looping and display the final results.
#include <iostream>
#include <string>
//#include "Products.h"

using namespace std;

int choice = 0;
double productOne = 2.98;
double productTwo = 4.50;
double productThree = 9.98;
double productFour = 4.49;
double productFive = 6.87;
int quantity = 0;
double cart = 0.00;
double productCount = 0;
char again = 'Y';

int main() {

    cout << "Please select a product from our store\n"
        << "we currently have the following for sale:\n";
        
        while (again != 'N' || again != 'n'){ 
        cout << endl
            << "\t (1) product 1 — $ 2.98\t (2) product 2 — $ 4.50\t (3) product 3 — $ 9.98\n"
            << "\t (4) product 4 — $ 4.49\t (5) product 5 — $ 6.87\n\n";
        cout << "your cart contains " << productCount << " items, totalling $" << cart << " dollars.\n";

        cout << "Type the product (number) to add it to your shopping cart\n";
        cin >> choice;
      
        cout << "How many would you like? ";
        cin >> quantity; 
        
        switch (choice) {
            case -1:
            break;

            case 1: 
            cart += productOne * quantity;
            productCount += quantity;
            cout << quantity << " of product (1) $ 2.98 added" << endl; 
            break;

            case 2: 
            cart += productTwo * quantity; 
            productCount += quantity;
            cout << quantity << " of product (2) $ 4.50 added" << endl; 
            break;

            case 3: 
            cart += productThree * quantity; 
            productCount += quantity;
            cout << quantity << " of product (3) $ 9.98 added" << endl;  
            break;

            case 4: 
            cart += productFour * quantity; 
            productCount += quantity;
            cout << quantity << " of product (4) $ 4.49 added" << endl;   
            break;

            case 5:
            cart += productFive * quantity; 
            productCount += quantity;
            cout << quantity << " of product (5) $ 6.87 added" << endl;  
            break;

            case '\n':
            case '\t': 
            break;

            default:
            cout << "enter a valid option" << endl;
            cin.clear();
            break;
        }
    
        cout << "your cart contains " << productCount << " items, totalling $" << cart << " dollars.\n";
        cout << "Would you like to continue shopping? Y/N\n" << endl; 
        cin >> again;
        if (again == 'N' || again == 'n')
        break;
    }
    cout << "Thank you for shopping with us.\n ";
	return 0;
}
