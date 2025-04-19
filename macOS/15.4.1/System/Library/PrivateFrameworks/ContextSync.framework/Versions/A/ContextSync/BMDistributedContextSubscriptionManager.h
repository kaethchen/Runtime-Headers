@class NSMutableArray;
@protocol BMDistributedContextSubscriptionStorage;

@interface BMDistributedContextSubscriptionManager : NSObject

@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) id<BMDistributedContextSubscriptionStorage> storage;

+ (unsigned long long)storageVersion:(id)a0;
+ (id)loadAndMigrateStorageFromLegacyToV1:(id)a0 withLocalDeviceID:(id)a1;
+ (id)loadFromStorage:(id)a0 withLocalDeviceID:(id)a1;

- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (BOOL)addSubscriptions:(id)a0;
- (id)allSubscriptions;
- (BOOL)removeSubscription:(id)a0;
- (id)allSubscriptionIdentifiers;
- (id)deviceIdentifiersWithActiveSubscriptions;
- (BOOL)removeAllSubscriptionsMadeBySubscribingDevice:(id)a0;
- (BOOL)removeSubscriptionWithIdentifier:(id)a0 fromSubscribingDevice:(id)a1 onSubscribedDevice:(id)a2;
- (void)saveToStorage;
- (id)subscribingDevicesForIdentifier:(id)a0 subscribedToDevice:(id)a1;
- (id)subscriptionForIdentifier:(id)a0 fromSubscribingDevice:(id)a1 onSubscribedDevice:(id)a2;
- (id)subscriptionsWithIdentifier:(id)a0 subscribedToDevice:(id)a1;
- (id)subscriptionsWithSubscribedDevice:(id)a0;
- (id)subscriptionsWithSubscribingDevice:(id)a0;

@end
