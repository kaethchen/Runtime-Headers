@class NSString, NSURL, NSDictionary;

@interface OSPDevice : NSObject

@property BOOL isX86;
@property BOOL personalizationEnabled;
@property BOOL globalSigningEnabled;
@property BOOL supportsImage4;
@property (retain) NSString *image4DigestType;
@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecid;
@property (retain) NSString *hardwareModel;
@property BOOL productionMode;
@property BOOL effectiveProductionMode;
@property BOOL securityMode;
@property BOOL effectiveSecurityMode;
@property unsigned int securityDomain;
@property BOOL targetDiskMode;
@property (retain) NSURL *mountPointURL;
@property (retain) NSString *buildVersion;
@property (retain) NSString *bridgeVersion;
@property BOOL engineeringUseOnlyUnit;
@property BOOL internalUseOnlyUnit;
@property unsigned int cryptex1ProductClass;
@property (retain) NSDictionary *apSoftwareCoprocessorParameters;
@property (readonly) NSDictionary *apParameters;

+ (id)deviceWithBoardID:(unsigned int)a0 chipID:(unsigned int)a1 hardwareModel:(id)a2;
+ (id)deviceWithDummyIdentity;
+ (id)deviceWithDummyNonX86Identity;
+ (id)deviceWithPersonalizationEnabled:(BOOL)a0 globalSigningEnabled:(BOOL)a1;
+ (id)deviceWithRunningSystem;
+ (id)deviceWithTDMBackedVolumeMountPoint:(id)a0;
+ (id)deviceWithVariantDictionary:(id)a0;
+ (id)deviceWithVolumeMountPoint:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_assignDummyECID;
- (id)_getBridgeVersion;
- (id)_getBuildVersion;
- (id)_getHWTargetSysctl;

@end
