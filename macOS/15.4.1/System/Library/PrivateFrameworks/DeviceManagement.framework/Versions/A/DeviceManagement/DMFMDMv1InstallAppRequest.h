@class NSString, NSArray, NSDictionary, NSNumber;

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest

@property (copy, nonatomic) NSString *redemptionCode;
@property (copy, nonatomic) NSString *originator;
@property (nonatomic) BOOL manage;
@property (nonatomic) unsigned long long managementOptions;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSString *cellularSliceUUIDString;
@property (copy, nonatomic) NSString *contentFilterUUIDString;
@property (copy, nonatomic) NSString *DNSProxyUUIDString;
@property (copy, nonatomic) NSString *relayUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSNumber *tapToPayScreenLock;
@property (copy, nonatomic) NSNumber *allowUserToHide;
@property (copy, nonatomic) NSNumber *allowUserToLock;
@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
