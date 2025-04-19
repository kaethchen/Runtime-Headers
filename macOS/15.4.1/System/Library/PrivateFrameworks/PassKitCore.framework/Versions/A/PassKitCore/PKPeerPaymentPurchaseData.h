@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData

@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL requiresInteraction;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPKPeerPaymentPurchaseData:(id)a0;

@end
