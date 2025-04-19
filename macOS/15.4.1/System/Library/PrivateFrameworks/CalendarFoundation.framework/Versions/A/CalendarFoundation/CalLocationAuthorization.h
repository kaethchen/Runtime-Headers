@class NSString, CalLocationAuthorizationStatus, CLLocationManager, NSObject;
@protocol OS_dispatch_group;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _initializedTimestamp;
    unsigned long long _firstCallbackReceivedTimestamp;
    BOOL _failedToInitializePrecision;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)authorizationStatusForBundle:(id)a0;
+ (int)authorizationStatusForBundleIdentifier:(id)a0;
+ (id)logHandle;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (id)_cachedInstanceForBundleID:(id)a0 bundle:(id)a1;
+ (id)_keyForBundleID:(id)a0 bundle:(id)a1;
+ (id)authorizationForBundleIdentifier:(id)a0 bundle:(id)a1 createIfNecessary:(BOOL)a2;
+ (void)authorizationStatusForBundle:(id)a0 completion:(id /* block */)a1;
+ (int)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)initializeQueueAndInstancesIfNeeded;
+ (id)locationAuthorizationAsyncCallersQueue;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (BOOL)preciseLocationAuthorizedForBundle:(id)a0;
+ (void)preciseLocationAuthorizedForBundle:(id)a0 completion:(id /* block */)a1;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)ttlLocationStatus;
+ (void)ttlLocationStatusWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)authorizationStatus;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)initWithBundleID:(id)a0 bundle:(id)a1 queue:(id)a2;
- (unsigned long long)waitForPrecision;

@end
