@class NSString;

@interface HDAuthorizationStoreResetServer : HDStandardTaskServer <HKAuthorizationStoreResetServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_recalibrateEstimatesForSampleType:(id)a0 effectiveDate:(id)a1 completion:(id /* block */)a2;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_resetAuthorizationStatusesForObjects:(id)a0 completion:(id /* block */)a1;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)a0 objectType:(id)a1 completion:(id /* block */)a2;

@end
