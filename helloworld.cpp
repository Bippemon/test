#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
    srand(time(0));
    int randomNumber = rand() % 100 +1;
    int guessAmount;
    int userNum; 

    while(userNum != randomNumber)
    {
    cout << "antal gissningar: " << guessAmount << endl;
    cout << "Enter a number (1-100): ";
    cin >> userNum;

    
    if(userNum > randomNumber)
    {
        cout << "Lägre" << endl;
        ++guessAmount;
        continue;
    }
    
    else if (userNum < randomNumber)
    {
        cout << "Högre" << endl;
        ++guessAmount;
        continue;
    }

    else if (userNum == randomNumber)
    {
        break;
    }
    }
    cout << guessAmount << " gissningar" << endl;
    cout << "VINST!" << endl;
    //return 0;
}
    