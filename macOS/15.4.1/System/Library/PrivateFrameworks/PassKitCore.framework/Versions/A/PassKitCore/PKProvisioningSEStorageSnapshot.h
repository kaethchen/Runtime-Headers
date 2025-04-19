@class _PKProvisioningSEStorageSnapshot;

@interface PKProvisioningSEStorageSnapshot : NSObject <NSSecureCoding> {
    _PKProvisioningSEStorageSnapshot *_snapshot;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)appletTypePurpleTrustAirAccess;
+ (id)appletTypePurpleTrustAirAliro;
+ (id)appletTypePurpleTrustAirHome;
+ (void)getCurrentSnapshot:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (id)_initWithSnapshot:(id)a0;
- (BOOL)addAppletTypesToSnapshot:(id)a0;
- (id)appletTypesForAppletIDs:(id)a0;
- (BOOL)canFitAppletTypes:(id)a0;
- (void)removeAppletTypesFromSnapshot:(id)a0;
- (long long)requiredStorageForAppletTypes:(id)a0;
- (long long)totalStorage;
- (long long)totalUsage;
- (long long)totalUsageOfAppletType:(id)a0;
- (long long)usageOfAppletType:(id)a0;

@end
