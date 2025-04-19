@class NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKPayLaterPayment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long subtype;
@property (copy, nonatomic) NSDate *postedDate;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (retain, nonatomic) PKCurrencyAmount *interestPaid;
@property (retain, nonatomic) PKCurrencyAmount *principalPaid;
@property (retain, nonatomic) NSArray *fundingSources;
@property (copy, nonatomic) NSString *associatedTransactionPaymentHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPayLaterPayment:(id)a0;

@end
