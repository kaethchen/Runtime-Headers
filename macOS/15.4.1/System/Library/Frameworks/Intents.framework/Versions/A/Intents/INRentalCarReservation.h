@class CLPlacemark, INRentalCar, INDateComponentsRange;

@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INRentalCar *rentalCar;
@property (readonly, copy) INDateComponentsRange *rentalDuration;
@property (readonly, copy) CLPlacemark *pickupLocation;
@property (readonly, copy) CLPlacemark *dropOffLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_duration;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 rentalCar:(id)a7 rentalDuration:(id)a8 pickupLocation:(id)a9 dropOffLocation:(id)a10;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 rentalCar:(id)a6 rentalDuration:(id)a7 pickupLocation:(id)a8 dropOffLocation:(id)a9;

@end
