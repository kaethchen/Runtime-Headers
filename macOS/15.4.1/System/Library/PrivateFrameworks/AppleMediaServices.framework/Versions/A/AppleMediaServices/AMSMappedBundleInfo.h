@class NSString;

@interface AMSMappedBundleInfo : NSObject

@property (class, readonly) AMSMappedBundleInfo *currentBundleInfo;

@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *clientName;
@property (retain) NSString *clientVersion;
@property (retain) NSString *scheme;
@property (retain) NSString *secureScheme;
@property (retain) NSString *accountMediaType;
@property (retain) NSString *proxyAppBundleID;
@property (retain) NSString *userAgentSuffix;

+ (id)_accountMediaTypeForClientName:(id)a0 bundleID:(id)a1;
+ (id)_clientNameFromProcessInfo:(id)a0;
+ (id)_clientVersionFromProcessInfo:(id)a0 clientName:(id)a1;
+ (id)accountMediaTypeInfoForProcessInfo:(id)a0;
+ (id)bundleInfoForMobileAppStoreWithProcessInfo:(id)a0;
+ (id)bundleInfoForProcessInfo:(id)a0;

- (void).cxx_destruct;
- (id)_initWithClient:(long long)a0 processInfo:(id)a1;

@end
