@class NSString, AMSPurchaseResult;

@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceName;
@property (retain) AMSPurchaseResult *purchaseResult;
@property (retain) NSString *cacheKey;
@property BOOL requiresDelegateToken;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCacheKey:(id)a0 challenge:(id)a1;
- (id)initWithChallenge:(id)a0 userAgent:(id)a1;
- (id)initWithPurchaseResult:(id)a0 challenge:(id)a1 userAgent:(id)a2;

@end
