#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include <string>

// Base class representing a ride
class Ride {
public:
    // Constructor: Initializes a ride with an ID, pickup location, dropoff location, and distance
    Ride(std::string id, std::string pickup, std::string dropoff, double dist);

    // Pure virtual function for calculating the fare (to be implemented by derived classes)
    virtual double fare() const = 0;

    // Pure virtual function for displaying ride details (to be implemented by derived classes)
    virtual void rideDetails() const = 0;

protected:
    std::string rideID;         // Unique identifier for the ride
    std::string pickupLocation; // Starting location of the ride
    std::string dropoffLocation; // Destination of the ride
    double distance;            // Distance of the ride in miles
};

#endif // End of the header guard to prevent multiple inclusions
