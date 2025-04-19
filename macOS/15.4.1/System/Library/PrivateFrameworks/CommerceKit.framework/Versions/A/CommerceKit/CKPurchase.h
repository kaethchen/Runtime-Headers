@class NSString, CKStoreClient, NSDictionary;

@interface CKPurchase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKStoreClient *storeClient;
@property (copy) NSString *forcedUsername;
@property (copy) NSString *bagURLKey;
@property (readonly) NSDictionary *buyParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithLegacyPurchase:(id)a0 storeClient:(id)a1;
- (id)initWithBuyParameters:(id)a0 storeClient:(id)a1;
- (id)initWithBuyParametersString:(id)a0 storeClient:(id)a1;

@end
