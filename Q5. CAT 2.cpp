//Q.5
#include <iostream>//Enables use of the input/output operations
using namespace std;//enables use of the variables and standard library

int main() {
    //Variable initialization and declaration.
    const double PI = 3.14159265358979323846;
    int choice;
    bool quit = false;

//Defining the switch condition.
    while (!quit) {
        // Display menu
        cout << "Menu:\n";
        cout << "1. Calculate the area of a circle\n";
        cout << "2. Calculate the area of a rectangle\n";
        cout << "3. Calculate the area of a triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Perform action based on user's choice
        switch (choice) {
            case 1: {
                // Calculate area of a circle
                double radius, area;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = PI * radius * radius; // Using manually defined PI
                cout << "Area of the circle: " << area << "\n\n";
                break;
            }
            case 2: {
                // Calculate area of a rectangle
                double length, width, area;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = length * width;
                cout << "Area of the rectangle: " << area << "\n\n";
                break;
            }
            case 3: {
                // Calculate area of a triangle
                double base, height, area;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << "\n\n";
                break;
            }
            case 4:
                // Quit the program
                quit = true;
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n\n";
                break;
        }
    }

    return 0;
}
