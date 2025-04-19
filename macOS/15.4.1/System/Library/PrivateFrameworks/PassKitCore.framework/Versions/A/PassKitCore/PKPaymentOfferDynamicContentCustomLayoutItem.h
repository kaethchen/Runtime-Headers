@class PKPaymentOfferDynamicContentCustomLayoutItemTextDetails;

@interface PKPaymentOfferDynamicContentCustomLayoutItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *leadingText;
@property (readonly, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *trailingText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
