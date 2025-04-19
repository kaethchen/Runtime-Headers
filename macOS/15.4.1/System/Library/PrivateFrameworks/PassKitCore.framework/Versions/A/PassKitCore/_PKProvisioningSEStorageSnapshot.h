@interface _PKProvisioningSEStorageSnapshot : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ snapshot;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (id)purpleTrustAirAccessAppletType;
+ (id)purpleTrustAirAliroAppletType;
+ (id)purpleTrustAirHomeAppletType;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (BOOL)addToSnapshotWithAppletTypes:(id)a0;
- (id)appletTypesForAppletIDs:(id)a0;
- (BOOL)canFitWithAppletTypes:(id)a0;
- (void)removeFromSnapshotWithAppletTypes:(id)a0;
- (long long)requiredStorageForAppletTypes:(id)a0;
- (long long)totalStorage;
- (long long)totalUsage;
- (long long)totalUsageOfAppletType:(id)a0;
- (long long)usageOfAppletType:(id)a0;

@end
