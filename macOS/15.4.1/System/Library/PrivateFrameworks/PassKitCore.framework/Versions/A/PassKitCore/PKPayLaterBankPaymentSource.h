@class PKAccountPaymentFundingSource;

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAccountPaymentFundingSource *accountPaymentFundingSource;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithAccountPaymentFundingSource:(id)a0;

@end
