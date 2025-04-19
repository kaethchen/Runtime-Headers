@class PKCurrencyAmount, NSArray, NSDate;

@interface PKPayLaterAccountProductEligibleSpend : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) PKCurrencyAmount *availableToSpend;
@property (retain, nonatomic) NSArray *financingOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
