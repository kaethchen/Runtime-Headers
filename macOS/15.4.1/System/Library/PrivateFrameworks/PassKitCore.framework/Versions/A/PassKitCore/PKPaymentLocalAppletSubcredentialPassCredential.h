@class PKAppletSubcredential, PKAddCarKeyPassConfiguration, PKPaymentPass;

@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential

@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKAppletSubcredential *credentialToShare;
@property (readonly, nonatomic) PKAddCarKeyPassConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 credentialToShare:(id)a1;

@end
