@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)allowedEntitlements;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isInternalProcess;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (BOOL)isSearchEnabledProcess;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isInternal;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (id)initWithEntitlements:(id)a0;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isUIClient;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;

@end
