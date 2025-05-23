@class NSString, NSDecimalNumber;

@interface PKCreditAccountMergeSummaryAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *ownerAltDSID;
@property (retain, nonatomic) NSDecimalNumber *statementBalance;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToCreditAccountMergeSummaryAccountDetails:(id)a0;

@end
