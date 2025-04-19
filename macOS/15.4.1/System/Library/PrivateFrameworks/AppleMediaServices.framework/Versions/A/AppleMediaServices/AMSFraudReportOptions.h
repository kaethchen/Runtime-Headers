@class NSString, ACAccount;

@interface AMSFraudReportOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long authenticationTokenType;
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) NSString *nameSpace;
@property (readonly, nonatomic) NSString *fsrData;
@property (copy, nonatomic) NSString *keyIdentifier;
@property (nonatomic) BOOL shouldIncludeODIAssessment;

+ (BOOL)isValidAuthenticationTokenType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTransactionIdentifier:(id)a0 nameSpace:(id)a1 fsrData:(id)a2;

@end
