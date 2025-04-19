@class NSString, AMSMappedBundleInfo, AMSProcessInfo;
@protocol AMSDeviceInfo;

@interface AMSUserAgent : NSObject

@property (readonly) AMSMappedBundleInfo *bundleInfo;
@property (readonly) AMSProcessInfo *processInfo;
@property (readonly) id<AMSDeviceInfo> deviceInfoProvider;
@property (retain) NSString *clientName;
@property (retain) NSString *clientVersion;

+ (id)_sharedCache;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;
+ (id)userAgentForProcessInfo:(id)a0;

- (void).cxx_destruct;
- (id)compile;
- (id)initWithProcessInfo:(id)a0;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (id)_compiledAMSCoreUserAgent;
- (id)_compiledAMSUserAgentShouldCache:(BOOL *)a0;
- (id)_initWithProcessInfo:(id)a0 deviceInfoProvider:(id)a1;
- (id)_macComponentAccountMediaType;
- (id)_macComponentClientInfo;
- (id)_macComponentParenthetical;
- (id)_macComponentWebKitVersionString;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_sharedComponentFrameworkVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;
- (id)_userAgentSuffix;

@end
