@class NSString, NSDictionary, AMSPurchase, NSError, NSURLResponse;

@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *correlationID;
@property (copy) NSError *error;
@property (copy) NSDictionary *loadURLEventDictionary;
@property (copy) AMSPurchase *purchase;
@property (copy) NSDictionary *responseDictionary;
@property (copy) NSURLResponse *URLResponse;
@property BOOL didShowPaymentSheet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPurchaseResult:(id)a0;

@end
