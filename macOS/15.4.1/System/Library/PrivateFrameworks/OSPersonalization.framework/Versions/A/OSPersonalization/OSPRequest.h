@class NSUUID, NSString, NSURL, NSArray, NSData, NSSet, NSDictionary, NSMutableArray, OSPVolume, OSPDevice, OSPSecureBootBundle, OSPBuildIdentity;

@interface OSPRequest : NSObject <NSCopying>

@property (retain) OSPDevice *device;
@property (retain) OSPSecureBootBundle *bundle;
@property (retain) OSPBuildIdentity *buildIdentity;
@property (retain) NSURL *personalizedOutputURL;
@property (retain) NSURL *testPersonalizedOutputURL;
@property (retain) NSMutableArray *extraManifestRoots;
@property BOOL shouldPersonalize;
@property BOOL forcePersonalization;
@property BOOL authenticatedRootVolume;
@property BOOL installSingleManifest;
@property (retain) OSPVolume *targetVolume;
@property BOOL enableTestMode;
@property long long fakePersonalizationErrorCode;
@property BOOL useDummyDeviceIdentity;
@property (retain) NSString *kernelCacheOverrideTag;
@property (retain) NSUUID *uuid;
@property BOOL noERB;
@property BOOL showUsageForPersonalization;
@property (retain) NSURL *volumeURL;
@property (retain) NSURL *bundleURL;
@property (retain) NSArray *packageSpecifiers;
@property (retain) NSURL *outputURL;
@property (retain) NSURL *signingServerURL;
@property (retain) NSString *variant;
@property BOOL userAuth;
@property (retain) NSData *appleConnectData;
@property BOOL showUI;
@property BOOL globalSignature;
@property BOOL useTDMDeviceIdentity;
@property BOOL useRunningDeviceIdentity;
@property (retain) NSDictionary *apRequestEntries;
@property BOOL mergeToOutputDirectory;
@property BOOL preferBuildManifest;
@property BOOL flattenManifestRoot;
@property (retain) NSURL *kernelCacheOverride;
@property (retain) NSDictionary *bundleOverrides;
@property (retain) NSSet *deviceClasses;
@property (retain) NSData *softwareNonceForUpdateFreshness;
@property unsigned long long ticketTypes;
@property unsigned long long maxConcurrentRequests;
@property (readonly) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)_parseArugments:(const char **)a0 length:(int)a1;
- (BOOL)_parsePRDocument:(id)a0;
- (void)_printUsageForExecutableNamed:(id)a0;
- (BOOL)_setPropertiesFromOptions:(id)a0;
- (id)initForGlobalSigningWithArgs:(const char **)a0 length:(int)a1;
- (id)initWithArgs:(const char **)a0 length:(int)a1;

@end
