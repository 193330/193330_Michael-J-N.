//Q6.
#include <iostream>//Header file which enables us work with output&input
#include <chrono>//Time operations
#include <thread>//thread operations

using namespace std;//standard library and variables.

//Condition defined
void delay(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}

void trafficLightSimulation() {
    while (true) {
        // Yellow light for 10 before the traffic is given the go ahead to stop.
        cout << "Yellow light\n";
        delay(10);   // 30 seconds 

        // Red light for 30 seconds before it turns to Yellow light
        cout << "Red light\n";
        delay(30);  // 30 seconds 
        
        // Yellow light for 10 seconds
        cout << "Yellow light\n";
        delay(10);   // 10 seconds 

        // Green light for 30 seconds
        cout << "Green light\n";
        delay(30);  // 30 seconds 
    }
}

int main() {//function calling
    trafficLightSimulation();
    return 0;
}
