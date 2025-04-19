@class FKPaymentPass;

@interface PKPaymentPass : PKSecureElementPass

@property (readonly, nonatomic) FKPaymentPass *fkPaymentPass;
@property (readonly, nonatomic) unsigned long long activationState;

@end
