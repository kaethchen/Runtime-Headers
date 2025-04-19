@class NSString, NSArray, ISStoreAccount, NSDictionary;

@interface ISStoreClient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long frameworkVersion;
@property (copy) NSString *identifier;
@property long long clientType;
@property (readonly) NSString *mediaType;
@property (copy) ISStoreAccount *primaryAccount;
@property (copy) NSString *userAgentAppName;
@property (copy) NSString *userAgentAppVersion;
@property (copy) NSString *agentPreferencesDomain;
@property (copy) NSString *appPreferencesDomain;
@property (copy) NSString *storeFrontBagKey;
@property (copy) NSArray *productionBagURLs;
@property (copy) NSArray *sandboxBagURLs;
@property (copy) NSString *toolbarBagKey;
@property long long requiredBagType;
@property (copy) NSString *aslDomain;
@property (setter=_setAlwaysUseSandboxEnvironment:) BOOL _alwaysUseSandboxEnvironment;
@property (copy) NSString *storeURLScheme;
@property (copy) NSString *storeSecureURLScheme;
@property (copy) NSString *tempPathClientIdentifier;
@property long long mediaTypeMask;
@property (copy) NSString *pushServiceName;
@property (copy) NSString *appPath;
@property (copy) NSDictionary *daap;
@property (copy) NSString *displayUIHostID;
@property (readonly) int pid;
@property (copy) NSString *agentListenerName;
@property BOOL isDaemon;

+ (id)knownClientWithIdentifier:(id)a0 frameworkVersion:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreClientType:(long long)a0;
- (void)_cacheKnownClient:(id)a0;
- (id)callerIdentity;
- (id)initWithApplicationPath:(id)a0;
- (BOOL)isEqualToStoreClient:(id)a0;

@end
