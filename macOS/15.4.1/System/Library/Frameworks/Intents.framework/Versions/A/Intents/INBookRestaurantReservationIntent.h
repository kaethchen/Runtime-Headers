@class INRestaurantOffer, NSString, INRestaurantGuest, NSDateComponents, INRestaurant, NSDate;

@interface INBookRestaurantReservationIntent : INIntent <INBookRestaurantReservationIntentExport, NSCopying>

@property (copy, nonatomic) NSDate *bookingDate;
@property (copy) INRestaurant *restaurant;
@property (copy) NSDateComponents *bookingDateComponents;
@property unsigned long long partySize;
@property (copy) NSString *bookingIdentifier;
@property (copy) INRestaurantGuest *guest;
@property (copy) INRestaurantOffer *selectedOffer;
@property (copy) NSString *guestProvidedSpecialRequestText;
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
- (id)initWithRestaurant:(id)a0 bookingDateComponents:(id)a1 partySize:(unsigned long long)a2 bookingIdentifier:(id)a3 guest:(id)a4 selectedOffer:(id)a5 guestProvidedSpecialRequestText:(id)a6;

@end
