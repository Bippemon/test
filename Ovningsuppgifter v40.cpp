#include <iostream>
#include <iomanip>

using namespace std;



// Uppgift 2
// int main()
// {
//     int lastYear, current;
//     float gas;

//     cout << "mätarställning förra året: ";
//     cin >> lastYear;
//     cout << "mätarställning nu: ";
//     cin >> current;
//     cout << "Hur många liter bensin har använts: ";
//     cin >> gas;

    
//     int miles = current - lastYear;

//     cout << "Antal körda mil: " << miles << endl;
//     cout << setprecision(2) << fixed << "Förbrukning per mil: " << gas/miles << " liter/m" << endl;
    
    
//     return 0;
// }



// // Uppgift 3
// int main()
// {
//     int carYear;
//     int currentYear = 2024;

//     cout << "What year is your car made? ";
//     cin >> carYear;

//     if(currentYear - carYear < 5)
//     {
//         cout << "Välj en helförsäkring";
//     }

//     else if (currentYear - carYear >= 5)
//     {
//         if (currentYear - carYear < 25)
//         {
//             cout << "Välj en halvförsäkring";
//         }
//         else
//         {
//             cout << "Välj en veteranbilsförsäkring";
//         }
//     }

//     return 0;
// }



// // Uppg 4
// int main()
// {
//     // float milesPerGallon;

//     // cout << "Miles per gallon: ";
//     // cin >> milesPerGallon;



//     // 1 mile / 1.609 km    // 1 gallon = 3.785 liter

//     float miles_to_km = 1.609;
//     float gallons_to_liter = 3.785;

//     float miles = 100, gallons = 2;

//     cout << miles/gallons << endl;
//     cout << (miles*miles_to_km) / (gallons*gallons_to_liter);
// }



// Uppgift 5
int main()
{
    //tid 1 = 02h 32m 22s
    //tid 2 = 02h 24m 18s

    int lopp1_h, lopp1_m, lopp1_s, lopp2_h, lopp2_m, lopp2_s;

    cout << "lopp 1\ntimmar: "; cin >> lopp1_h;
    cout << "minuter: "; cin >> lopp1_m;
    cout << "sekunder: "; cin >> lopp1_s;

    cout << "lopp 2\ntimmar: "; cin >> lopp2_h;
    cout << "minuter: "; cin >> lopp2_m;
    cout << "sekunder: "; cin >> lopp2_s;


    int lopp1_in_seconds = lopp1_h*3600 + lopp1_m*60 + lopp1_s;
    int lopp2_in_seconds = lopp2_h*3600 + lopp2_m*60 + lopp2_s;

    int time_total = lopp1_in_seconds + lopp2_in_seconds;
    int average_time = time_total/2;


    int average_h = average_time / 3600;
    int average_m = average_time % 3600 / 60;
    int average_s = average_time % 3600 % 60;

    cout << average_h << "h " << average_m << "m " << average_s << "s";

    return 0;
}   