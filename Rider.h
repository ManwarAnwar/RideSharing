#ifndef RIDER_H
#define RIDER_H

#include "Ride.h"
#include <vector>

// Rider class represents a customer who requests rides
class Rider {
public:
    // Constructor: Initializes a Rider with an ID and a name
    Rider(std::string id, std::string name);
    
    // Method for requesting a ride, which adds it to the requested rides list
    void requestRide(Ride* ride);
    
    // Method to display all requested rides for the rider
    void viewRides() const;

private:
    std::string riderID; // Unique identifier for the rider
    std::string name; // Rider's name
    std::vector<Ride*> requestedRides; // List of requested rides
};

#endif // End of header guard
