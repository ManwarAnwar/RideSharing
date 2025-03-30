#ifndef RIDER_H
#define RIDER_H

#include "Ride.h"
#include <vector>

class Rider {
public:
    Rider(std::string id, std::string name);
    void requestRide(Ride* ride);
    void viewRides() const;

private:
    std::string riderID;
    std::string name;
    std::vector<Ride*> requestedRides;
};

#endif
