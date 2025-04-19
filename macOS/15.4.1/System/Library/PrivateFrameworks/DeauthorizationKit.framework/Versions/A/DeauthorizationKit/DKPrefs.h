@interface DKPrefs : NSObject

+ (id)sharedInstance;

- (BOOL)boolForKey:(id)a0;
- (BOOL)isAppleInternal;
- (id)valueForKey:(id)a0;
- (BOOL)featureEnabled;
- (BOOL)mdmInitiated;
- (id)obliterationOptionsOverridePath;
- (BOOL)enabledForMDM;
- (BOOL)fakeAccountRemoval;
- (BOOL)fakeBootPolicyTransactionRetryFailure;
- (BOOL)fakeCompromisedSystem;
- (BOOL)fakeEFIPasswordSet;
- (BOOL)fakeFullSecurity;
- (BOOL)fakeInvalidDiskLayout;
- (BOOL)fakeLockdownModeEnabled;
- (BOOL)fakeNeedsPhotosSync;
- (BOOL)fakeNeedsiCloudSync;
- (BOOL)fakeSealedSystem;
- (id)fakeSupportedHardware;
- (BOOL)fakeTimeMachineEnabled;
- (BOOL)fakeUpdateBootPolicyFailure;
- (BOOL)fakeValidDiskLayout;
- (BOOL)fakeiMessageFacetimeSignout;
- (id)iCloudSyncTimeOverride;
- (BOOL)performDryRunObliteration;
- (BOOL)skipApplePayRemoval;
- (BOOL)skipBootPolicyCalls;
- (BOOL)skipFindMyDeactivation;
- (BOOL)skipNVRAM;
- (BOOL)skipReboot;
- (BOOL)skipSystemModalBlur;
- (id)valueForKey:(id)a0 usingManaged:(BOOL)a1;

@end
