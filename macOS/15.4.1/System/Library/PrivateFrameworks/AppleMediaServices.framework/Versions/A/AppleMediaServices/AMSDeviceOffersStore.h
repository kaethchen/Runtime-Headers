@class NSArray, NSDictionary, NSString;

@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (retain) NSArray *cachedRegistrationGroups;
@property (readonly) NSArray *companionSerialNumbers;
@property (retain) NSDictionary *deviceOfferEligibility;
@property (retain) NSArray *deviceOffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serialsBySubtractingAGroups:(id)a0 fromBGroups:(id)a1;
+ (id)serialsFromGroups:(id)a0;
+ (id)splitGroups:(id)a0 byItem:(id)a1;

- (void)_dbSetNullableValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)removeCachedRegistrationItem:(id)a0;

@end
