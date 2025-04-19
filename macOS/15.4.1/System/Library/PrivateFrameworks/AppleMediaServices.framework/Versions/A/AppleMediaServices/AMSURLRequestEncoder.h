@class NSString, AMSFairPlayDeviceIdentity, NSArray, AMSKeychainOptions, NSDictionary, AMSBagKeySet, ACAccount, AMSURLRequestProperties, NSObject, AMSProcessInfo;
@protocol AMSBagProtocol, AMSResponseDecoding, AMSFairPlayDeviceIdentityNetworkProviderProtocol, OS_dispatch_queue, AMSURLBagContract;

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } propertiesLock;
@property long long encodeCount;
@property (copy, nonatomic) AMSURLRequestProperties *parentProperties;
@property BOOL alwaysIncludeAuthKitHeaders;
@property (nonatomic) BOOL alwaysIncludeMMeClientInfoAndDeviceHeaders;
@property BOOL excludeIdentifierHeadersForAccount;
@property (nonatomic) BOOL preserveQueryParameterEncoding;
@property (nonatomic) BOOL shouldSetStorefrontHeader;
@property (nonatomic) BOOL shouldSetCookieHeader;
@property (retain, nonatomic) id<AMSFairPlayDeviceIdentityNetworkProviderProtocol> fpdiNetworkProvider;
@property (retain, nonatomic) AMSFairPlayDeviceIdentity *fairPlayDeviceIdentity;
@property (retain) ACAccount *account;
@property (retain) NSDictionary *additionalMetrics;
@property long long anisetteType;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property BOOL compressRequestBody;
@property BOOL disableResponseDecoding;
@property long long dialogOptions;
@property BOOL enableRemoteSecuritySigning;
@property (retain) NSArray *groupRequestAccounts;
@property (retain) NSString *gsTokenIdentifier;
@property BOOL includeClientVersions;
@property (retain) AMSKeychainOptions *keychainOptions;
@property (retain) NSString *logUUID;
@property long long mescalType;
@property long long requestEncoding;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property BOOL shouldSetCookiesFromResponse;
@property BOOL shouldSetStorefrontFromResponse;
@property BOOL urlKnownToBeTrusted;
@property (retain) Class paymentSheetTaskClass;
@property (retain, nonatomic) id<AMSURLBagContract> bagContract;
@property long long dataEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)init;
- (void).cxx_destruct;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 error:(id *)a2;
- (id)_addCookiesToRequest:(id)a0 account:(id)a1;
- (id)_methodStringFromMethod:(long long)a0;
- (void)_personalizeKeychainOptionsForAccount:(id)a0;
- (id)initWithBag:(id)a0;
- (id)initWithBagContract:(id)a0;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1 error:(id *)a2;
- (id)requestByEncodingRequestAndReturnSigningErrors:(id)a0 parameters:(id)a1;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2 error:(id *)a3;

@end
