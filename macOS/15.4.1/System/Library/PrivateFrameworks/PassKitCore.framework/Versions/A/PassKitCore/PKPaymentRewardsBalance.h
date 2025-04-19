@class NSDecimalNumber, NSString, NSURL, PKCurrencyAmount, NSDate;

@interface PKPaymentRewardsBalance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (retain, nonatomic) PKCurrencyAmount *monetaryValue;
@property (copy, nonatomic) NSDecimalNumber *conversionRate;
@property (nonatomic) unsigned long long roundingStrategy;
@property (nonatomic) unsigned long long eligibility;
@property (copy, nonatomic) NSString *programName;
@property (copy, nonatomic) NSURL *programURL;
@property (copy, nonatomic) NSDate *lastFetchedAt;
@property (readonly, nonatomic) BOOL isQuantitative;
@property (readonly, nonatomic) BOOL isRedeemable;
@property (readonly, nonatomic) BOOL isPositive;
@property (readonly, nonatomic) BOOL isValid;

+ (id)cashbackRewardsBalanceWithIdentifier:(id)a0 monetaryValue:(id)a1 eligibility:(unsigned long long)a2 programName:(id)a3 programURL:(id)a4 lastFetchedAt:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isFresh;
- (id)_nsDecimalRoundingBehavior;
- (unsigned long long)_nsDecimalRoundingMode;
- (id)convertAmountFromValue:(id)a0;
- (id)convertMonetaryValueFromValue:(id)a0;
- (id)convertValueFromAmount:(id)a0;
- (id)convertValueFromMonetaryValue:(id)a0;
- (id)formattedMonetaryValue;
- (id)formattedQuantityValue;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 value:(id)a2 monetaryValue:(id)a3 conversionRate:(id)a4 roundingStrategy:(unsigned long long)a5 eligibility:(unsigned long long)a6 programName:(id)a7 programURL:(id)a8 lastFetchedAt:(id)a9;
- (BOOL)isFreshForNow:(id)a0;

@end
