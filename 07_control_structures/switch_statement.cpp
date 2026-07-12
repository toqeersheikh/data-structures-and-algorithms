#include<iostream>
using namespace std;

int main() 
{
    int choice = 2;

    switch (choice) {
        case 1:
            cout << "Starting new game...\n";
            break;
        case 2:
            cout << "Loading saved game...\n";
            break;
        case 3:
            cout << "Opening options menu...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }

    return 0;
}
