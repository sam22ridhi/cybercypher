#include <iostream>
#include <obd.h>

int main() {
    OBD obd;
    obd.connect();

    if (!obd.isConnected()) {
        std::cout << "Error: Could not connect to the OBD system" << std::endl;
        return 1;
    }

    // Retrieve the distance traveled
    double distance = obd.getValue("010D").toDouble();

    std::cout << "Distance traveled: " << distance << " km" << std::endl;
    return 0;