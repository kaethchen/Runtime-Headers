@class NSString, NSXPCListenerEndpoint, AMSBlindedData, NSDictionary, AMSBuyParams, ACAccount, NSMutableArray, NSNumber, AMSProcessInfo;

@interface AMSPurchase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *URLBagKey;
@property (retain) AMSBlindedData *blindedData;
@property (retain) NSMutableArray *metricsActivities;
@property (retain) ACAccount *account;
@property (copy) NSDictionary *additionalHeaders;
@property (readonly, copy) AMSBuyParams *buyParams;
@property (readonly, copy) NSString *clientCorrelationKey;
@property (copy) AMSProcessInfo *clientInfo;
@property BOOL ignoreRequirePasswordRestriction;
@property (copy) NSString *logUUID;
@property (copy) NSNumber *ownerAccountId;
@property (copy) NSDictionary *metricsOverlay;
@property (retain) NSXPCListenerEndpoint *paymentViewServiceListener;
@property (copy) NSDictionary *performanceMetricsOverlay;
@property (copy) NSString *presentingSceneBundleIdentifier;
@property (copy) NSString *presentingSceneIdentifier;
@property (readonly) long long purchaseType;
@property (readonly, getter=isRedownload) BOOL redownload;
@property BOOL requiresAccount;
@property BOOL requiresApplePayClassic;
@property (nonatomic) BOOL sendBlindedData;
@property (copy) NSString *storefront;
@property (readonly) NSNumber *uniqueIdentifier;
@property (getter=isUserInitiated) BOOL userInitiated;
@property BOOL useJSONContentType;
@property BOOL asyncRecordEngagementEvent;
@property (copy) NSString *callerBundleId;
@property (copy) NSString *clientId;

+ (id)_authContextTitleForConfirmationStyle:(unsigned long long)a0;
+ (id)defaultAuthenticationContextForRequest:(id)a0;
+ (id)purchaseFromPurchase:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_generateIdentifier;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (long long)activityLabel;
- (id)authenticationContextForRequest:(id)a0;
- (BOOL)isEqualToPurchase:(id)a0;

@end
