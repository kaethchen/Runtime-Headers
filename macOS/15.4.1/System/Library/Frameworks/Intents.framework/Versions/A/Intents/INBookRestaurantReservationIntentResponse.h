@class NSString, INRestaurantReservationUserBooking;

@interface INBookRestaurantReservationIntentResponse : INIntentResponse <INImageProxyInjecting, INBookRestaurantReservationIntentResponseExport>

@property (readonly) long long code;
@property (copy) INRestaurantReservationUserBooking *userBooking;
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
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
