#include "Driver.h"  // Including the header file that defines the Driver class
#include <iostream>   // Including the standard input-output library

// Constructor for the Driver class
// Initializes the driver with an ID, name, and rating
Driver::Driver(std::string id, std::string n, double r)
    : driverID(id), name(n), rating(r) {}

// Method to add a ride to the driver's assigned rides list
void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);  // Adds the ride object to the vector
}

// Method to display driver information
void Driver::getDriverInfo() const {
    // Printing basic driver details
    std::cout << "Driver ID: " << driverID << "\nName: " << name
              << "\nRating: " << rating << "\nAssigned Rides:\n";

    // Iterating through the list of assigned rides and displaying details
    for (const auto& ride : assignedRides) {
        ride->rideDetails();  // Calls rideDetails() on each ride object
    }
}
