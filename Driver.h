#ifndef DRIVER_H
#define DRIVER_H

#include "Ride.h"   // Including the Ride class for handling ride-related functionality
#include <vector>   // Including the vector library to store assigned rides

// Definition of the Driver class
class Driver {
public:
    // Constructor: Initializes a driver with an ID, name, and rating
    Driver(std::string id, std::string name, double rating);
    
    // Method to assign a ride to the driver
    void addRide(Ride* ride);
    
    // Method to display driver information
    void getDriverInfo() const;

private:
    std::string driverID;    // Unique identifier for the driver
    std::string name;        // Driver's name
    double rating;           // Driver's rating (out of 5)
    std::vector<Ride*> assignedRides;  // List of rides assigned to the driver
};

#endif // Ending the header guard to prevent multiple inclusions
