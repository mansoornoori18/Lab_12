#include <iostream>  // COMSC-210 | Lab 12 | Mansoor Noori
#include <array>     // IDE Visual Studio,
#include <fstream>   // for file input&output

// to vaoid using std through out the project
using namespace std;

int main(){

    // create an array to hold the stock quantity 
    array<int, 30> stock{};

    // open the file that contain the stock numbers 
    ifstream file("inventory.txt");

    // check if the file opened succefully 
    if (!file) {
        cout << "could not open inventory.txt\n";
        return 1;
    }
    // read all stock quantities from file 
    for (size_t i = 0; i < stock.size(); i++){
        file >> stock[i];
    }
    // Display stock 
    cout << "Store inventory (quantities):\n";
    



 

    cout << " hello " << endl;



    return 0;
}