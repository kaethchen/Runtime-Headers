@class INRestaurantGuest, NSString, NSDate, INRestaurantOffer;

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying>

@property (copy) INRestaurantGuest *guest;
@property (copy) NSString *advisementText;
@property (copy) INRestaurantOffer *selectedOffer;
@property (copy) NSString *guestProvidedSpecialRequestText;
@property unsigned long long status;
@property (copy) NSDate *dateStatusModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithRestaurant:(id)a0 bookingDate:(id)a1 partySize:(unsigned long long)a2 bookingIdentifier:(id)a3 guest:(id)a4 status:(unsigned long long)a5 dateStatusModified:(id)a6;

@end
