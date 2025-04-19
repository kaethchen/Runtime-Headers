@class NSMutableDictionary, NSString, NSDictionary, AMSKeychainOptions, ACAccount, AMSProcessInfo, AMSPurchaseInfo;
@protocol AMSBagProtocol, AMSResponseDecoding;

@interface AMSURLRequestProperties : NSObject <NSCopying>

@property (copy) ACAccount *account;
@property (copy) NSDictionary *additionalMetrics;
@property long long anisetteType;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property long long dialogOptions;
@property BOOL disableBiometricsResponseHandling;
@property BOOL disableLoadURLMetrics;
@property BOOL disableResponseDecoding;
@property (retain) NSString *gsTokenIdentifier;
@property BOOL excludeIdentifierHeadersForAccount;
@property (retain) AMSKeychainOptions *keychainOptions;
@property BOOL knownToBeTrusted;
@property (copy) NSString *logUUID;
@property long long maxRetryCount;
@property long long mescalType;
@property (retain) AMSPurchaseInfo *purchaseInfo;
@property BOOL remoteSecuritySigningEnabled;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property long long reversePushType;
@property BOOL shouldSetCookiesFromResponse;
@property BOOL shouldSetStorefrontFromResponse;
@property (retain) NSMutableDictionary *userInfo;
@property (retain) Class paymentSheetTaskClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
