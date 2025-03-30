"Load all class files"
FileStream fileIn: 'Ride.st'.
FileStream fileIn: 'StandardRide.st'.
FileStream fileIn: 'PremiumRide.st'.
FileStream fileIn: 'Rider.st'.
FileStream fileIn: 'Driver.st'.

"Create a rider"
rider1 := Rider newWithID: 'R123' name: 'Alice'.

"Create rides with distances"
ride1 := StandardRide newWithID: 'R001' pickup: 'Downtown' dropoff: 'Airport' distance: 10.
ride2 := PremiumRide newWithID: 'R002' pickup: 'Mall' dropoff: 'Hotel' distance: 5.

"Rider requests rides"
rider1 requestRide: ride1.
rider1 requestRide: ride2.

"View rides"
rider1 viewRides.

"Create a driver"
driver1 := Driver newWithID: 'D001' name: 'Bob'.

"Driver accepts rides with valid ratings"
driver1 addRide: ride1 withRating: 4.8. "Ensure this rating is valid"
driver1 addRide: ride2 withRating: 5.0. "This rating is also valid"

"View driver info"
Transcript show: driver1 getDriverInfo; cr.