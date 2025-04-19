@class NSString, NSURL;

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) unsigned int installQOSOverride;
@property (readonly, nonatomic) BOOL skipDeviceFamilyCheck;
@property (readonly, nonatomic) BOOL skipThinningCheck;
@property (readonly, nonatomic) BOOL allowPatchWithoutSinf;
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled;
@property (readonly, nonatomic) BOOL localSigningIsUnrestricted;
@property (readonly, nonatomic) long long nSimultaneousInstallations;
@property (readonly, nonatomic) BOOL deviceHasPersonas;
@property (readonly, nonatomic) BOOL requireEligibilityChecksForAppsInDevelopment;
@property (readonly, nonatomic) NSString *iOSSupportVersion;
@property (readonly, nonatomic) NSURL *legacyExtensionCachePlist;
@property (readonly, nonatomic) NSURL *stagingRootForSystemContent;
@property (readonly, nonatomic) NSURL *stagingRootForUserContent;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initForTesting;
- (id)stagingRootForDevice:(int)a0 url:(id)a1 identifier:(unsigned long long *)a2 error:(id *)a3;
- (id)stagingRootForIdentifier:(unsigned long long)a0;
- (id)stagingRootForURL:(id)a0 identifier:(unsigned long long *)a1 error:(id *)a2;

@end
