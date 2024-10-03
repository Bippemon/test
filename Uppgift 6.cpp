#include <iostream>
#include <iomanip>

// using namespace std; 

int main()
{   
    // bills
    int hundred, fifty, twenty, ten, five, one;
    int price, paid;

    // takes input from user
    std::cout << "Wares price: ";
    std::cin >> price;
    std::cout << "Amount paid: ";
    std::cin >> paid;

    int change = paid - price;
    
    // calculations for each bill
    hundred = change / 100;   //amount of 100 bills
    change -= 100 * hundred;
    fifty = change / 50;      //amount of 50 bills
    change -= 50 * fifty;
    twenty = change / 20;     //amount of 20 bills
    change -= 20 * twenty;
    ten = change / 10;        //amount of 10 coins
    change -= 10 * ten;
    five = change / 5;        //amount of 5 coins
    change -= 5 * five;
    one = change;             //amount of 1 coins


    std::cout << "Change (bills amount):" << std::endl;
    // prints divided change
    std::cout << "100: " << std::setw(1) << hundred << std::endl;
    std::cout << "50: " << std::setw(2) << fifty << std::endl;
    std::cout << "20: " << std::setw(2) << twenty << std::endl;
    std::cout << "10: " << std::setw(2) << ten << std::endl;
    std::cout << "5: " << std::setw(3) << five << std::endl;
    std::cout << "1: " << std::setw(3) << one << std::endl;


    return 0;
}