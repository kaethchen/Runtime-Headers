@class NSString, NSDate, NSNumber, INImage;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport>

@property (readonly) unsigned long long defaultPartySize;
@property (readonly, copy) NSDate *defaultBookingDate;
@property (copy) NSNumber *maximumPartySize;
@property (copy) NSNumber *minimumPartySize;
@property (copy) INImage *providerImage;
@property (readonly) long long code;
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
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithDefaultPartySize:(unsigned long long)a0 defaultBookingDate:(id)a1 code:(long long)a2 userActivity:(id)a3;

@end
