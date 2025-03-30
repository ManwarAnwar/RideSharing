Object subclass: Driver [
    | driverID name totalRating rideCount rides |

    Driver class >> newWithID: anID name: aName [
        ^ self new initializeWithID: anID name: aName.
    ]

    Driver >> initializeWithID: anID name: aName [
        driverID := anID.
        name := aName.
        totalRating := 0.0. "Initialize total rating to 0.0"
        rideCount := 0. "Initialize ride count to 0"
        rides := OrderedCollection new. "Initialize rides collection"
    ]

    Driver >> addRide: aRide withRating: aRating [
        "Log received ride and rating"
        Transcript show: 'Received ride: ', aRide showDetails, ' with rating: ', aRating printString; cr.

        rides add: aRide.
        rideCount := rideCount + 1.
        Transcript show: 'rideCount after increment: ', rideCount printString; cr.

        "Check if aRating is valid"
        (aRating isNumber and: [(aRating >= 0) and: [aRating <= 5]])
            ifTrue: [
                totalRating := totalRating + aRating. "Update total rating"
                Transcript show: 'Updated totalRating: ', totalRating printString; cr.
            ]
            ifFalse: [
                Transcript show: 'Error: Invalid rating: ', aRating printString; cr.
            ].
    ]

    Driver >> getDriverInfo [
        | avgRating |
        avgRating := (rideCount > 0) 
            ifTrue: [(totalRating / rideCount) asFloat printString]
            ifFalse: ['0.0'].

        Transcript show: 'Calculating avgRating: ', avgRating; cr.
        ^ 'Driver: ', name, ' | Rating: ', avgRating.
    ]
]
