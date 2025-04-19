@class NSString, NSArray, INRestaurant, NSDate;

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) INRestaurant *restaurant;
@property (copy) NSString *bookingDescription;
@property (copy) NSDate *bookingDate;
@property unsigned long long partySize;
@property (copy) NSString *bookingIdentifier;
@property (getter=isBookingAvailable) BOOL bookingAvailable;
@property (copy) NSArray *offers;
@property BOOL requiresManualRequest;
@property BOOL requiresEmailAddress;
@property BOOL requiresName;
@property BOOL requiresPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithRestaurant:(id)a0 bookingDate:(id)a1 partySize:(unsigned long long)a2 bookingIdentifier:(id)a3;

@end
