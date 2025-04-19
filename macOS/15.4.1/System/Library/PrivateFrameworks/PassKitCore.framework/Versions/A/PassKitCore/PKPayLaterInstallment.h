@class NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKPayLaterInstallment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *installmentIdentifier;
@property (copy, nonatomic) NSString *planIdentifier;
@property (copy, nonatomic) NSArray *appliedPayments;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) PKCurrencyAmount *totalAmount;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSDate *payoffDate;
@property (nonatomic) long long interval;
@property (copy, nonatomic) NSArray *payments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)amountPaid;
- (BOOL)isEqualToPayLaterInstallment:(id)a0;
- (BOOL)paymentIdentitiferContributedToInstallment:(id)a0;

@end
