@class NSString;

@interface GTDeviceProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long locationID;
@property (nonatomic) unsigned long long remoteXPCVersionFlags;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *hardwareModel;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *uniqueDeviceID;
@property (copy, nonatomic) NSString *cpuArchitecture;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *mobileDeviceMinimumVersion;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *releaseType;
@property (copy, nonatomic) NSString *reality;
@property (nonatomic) BOOL appleInternal;
@property (nonatomic) BOOL deviceSupportsLockdown;
@property (nonatomic) BOOL effectiveProductionStatusAp;
@property (nonatomic) BOOL isUIBuild;
@property (nonatomic) BOOL osInstallEnvironment;
@property (nonatomic) BOOL storeDemoMode;

+ (id)uniqueDeviceID;
+ (id)hardwareUUID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)initForEmbeddedSystem;

@end
