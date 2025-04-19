@class NSNumber, NSString, NSDateComponents, INRestaurant, NSDate;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying>

@property (retain, nonatomic) NSDate *preferredBookingDate;
@property (copy) INRestaurant *restaurant;
@property unsigned long long partySize;
@property (copy) NSDateComponents *preferredBookingDateComponents;
@property (copy) NSNumber *maximumNumberOfResults;
@property (copy) NSDate *earliestBookingDateForResults;
@property (copy) NSDate *latestBookingDateForResults;
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
- (id)initWithRestaurant:(id)a0 partySize:(unsigned long long)a1 preferredBookingDateComponents:(id)a2 maximumNumberOfResults:(id)a3 earliestBookingDateForResults:(id)a4 latestBookingDateForResults:(id)a5;

@end
