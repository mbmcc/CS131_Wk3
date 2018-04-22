
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
//#include "Sales.h"

using namespace std;

int product = 0;
double productOne = 2.98;
double productTwo = 4.50;
double productThree = 9.98;
double productFour = 4.49;
double productFive = 6.87;
int quantity = 0;
double cart = 0.00;

int main() {

    cout << "Please select a product from our store\n"
        << "Type the product number to add it to your shopping cart\n"
        << "we currently have the following for sale:\n"
        << "product 1 — $ 2.98\t product 2 — $ 4.50\t product 3 — $ 9.98\t product 4 — $ 4.49\t product 5 — $ 6.87\n";
    while ((product = cin.get()) !=("q" || "Q")) { 
        cout << "Enter the product (number) that you would like to add to your cart.\n"
             << "Enter \"q\" to quit\n";
        cin >> product;
        
        cout << "How many would you like?\n";
        cin >> quantity; 
        cin.clear();

        switch (product) {
                
            case '1' : 
            cart += productOne * quantity;
            cout << "product (1) $ 2.98 added" << endl; 
            break;
                
            case '2' : 
            cart += productTwo * quantity; 
            cout << "product (2) $ 4.50 added" << endl; 
            break;

            case '3' : 
            cart += productThree * quantity; 
            cout << "product (3) $ 9.98 added" << endl;  
            break;

            case '4' : 
            cart += productFour * quantity; 
            cout << "product (4) $ 4.49 added" << endl;   
            break;

            case '5' :
            cart += productFive * quantity; 
            cout << "product (5) $ 6.87 added" << endl;  
            break;

            case '\n' :
            case '\t' : 
            break;

            default:
            cout << "enter a valid option" << endl;
            cin.clear();
            break;
        }

    }
	return 0;
}
