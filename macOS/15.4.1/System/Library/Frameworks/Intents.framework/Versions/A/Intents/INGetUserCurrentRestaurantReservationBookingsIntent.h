@class NSString, INRestaurant, NSNumber, NSDate;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying>

@property (copy) INRestaurant *restaurant;
@property (copy) NSString *reservationIdentifier;
@property (copy) NSNumber *maximumNumberOfResults;
@property (copy) NSDate *earliestBookingDateForResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithRestaurant:(id)a0 reservationIdentifier:(id)a1 maximumNumberOfResults:(id)a2 earliestBookingDateForResults:(id)a3;

@end
