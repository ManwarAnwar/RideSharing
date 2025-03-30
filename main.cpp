#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

int main() {
    // Create Rides
    StandardRide ride1("SR001", "Downtown", "Airport", 10);
    PremiumRide ride2("PR002", "Mall", "Hotel", 15);

    // Create Rider and request rides
    Rider rider1("R001", "Alice");
    rider1.requestRide(&ride1);
    rider1.requestRide(&ride2);
    
    // Display Rider's requested rides
    rider1.viewRides();

    // Create Driver and assign rides
    Driver driver1("D001", "Bob", 4.9);
    driver1.addRide(&ride1);
    driver1.addRide(&ride2);

    // Display Driver info
    driver1.getDriverInfo();

    return 0;
}
