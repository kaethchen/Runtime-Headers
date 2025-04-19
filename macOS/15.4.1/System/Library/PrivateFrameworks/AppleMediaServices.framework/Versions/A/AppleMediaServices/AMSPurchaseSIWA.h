@class NSString, AKAppleIDAuthenticationContext;

@interface AMSPurchaseSIWA : AMSPurchase <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AKAppleIDAuthenticationContext *authenticationContext;
@property (copy) NSString *bundleID;
@property (copy) NSString *serviceID;
@property (copy) NSString *teamID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appProvidedData;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (id)authenticationContextForRequest:(id)a0;

@end
