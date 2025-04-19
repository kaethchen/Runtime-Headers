@class NSArray;

@interface AppAttestEligibilityManager : NSObject

@property (retain, nonatomic) NSArray *allowlistedDaemons;
@property (retain, nonatomic) NSArray *allowlistedExtensions;

- (void).cxx_destruct;
- (BOOL)containsValidEntitlements;
- (id)fetchBundleRecordFor:(struct { unsigned int x0[8]; })a0;
- (id)fetchEntitlementForAuditToken:(struct { unsigned int x0[8]; })a0 withKey:(id)a1;
- (BOOL)isEligibleApplicationExtensionFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleApplicationFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleClientFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleDaemonFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleForPrivService:(struct { unsigned int x0[8]; })a0;
- (BOOL)isSupportedHardware;
- (BOOL)isSupportedSPIClient;
- (BOOL)meetsSecurityControlsForAuditToken:(struct { unsigned int x0[8]; })a0;

@end
