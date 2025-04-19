@interface PKAccountEnhancedMerchantBehavior : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double minRefreshPeriod;
@property (nonatomic) double shortMinRefreshPeriod;
@property (nonatomic) double longMinRefreshPeriod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (double)cooldownPeriodForLevel:(unsigned long long)a0;
- (id)initWithMinRefreshPeriod:(id)a0;
- (BOOL)isEqualToAccountEnhancedMerchantBehavior:(id)a0;

@end
