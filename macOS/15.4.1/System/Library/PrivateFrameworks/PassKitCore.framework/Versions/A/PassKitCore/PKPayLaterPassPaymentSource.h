@class PKPaymentApplication, PKPaymentPass;

@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;

@end
