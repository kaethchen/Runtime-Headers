@class NSDate, NSString, NSArray, INRideVehicle, CLPlacemark, INRideOption, NSUserActivity, INRideCompletionStatus, INDateComponentsRange, INRideDriver;

@interface INRideStatus : NSObject <INImageProxyInjecting, INCacheableContainer, INRideStatusExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *rideIdentifier;
@property long long phase;
@property (copy) INRideCompletionStatus *completionStatus;
@property (copy) INRideVehicle *vehicle;
@property (copy) INRideDriver *driver;
@property (copy) NSDate *estimatedPickupDate;
@property (copy) NSDate *estimatedDropOffDate;
@property (copy) NSDate *estimatedPickupEndDate;
@property (copy) INDateComponentsRange *scheduledPickupTime;
@property (copy) CLPlacemark *pickupLocation;
@property (copy) NSArray *waypoints;
@property (copy) CLPlacemark *dropOffLocation;
@property (copy) INRideOption *rideOption;
@property (retain) NSUserActivity *userActivityForCancelingInApplication;
@property (copy) NSArray *additionalActionActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;

@end
