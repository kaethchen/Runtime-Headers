@class NSString, WFWalletMerchant, INCurrencyAmount, INPaymentMethod;

@interface WFWalletTransaction : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *transactionDescription;
@property (readonly, copy, nonatomic) WFWalletMerchant *merchant;
@property (readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (readonly, copy, nonatomic) INPaymentMethod *paymentMethod;
@property (readonly, copy, nonatomic) NSString *wfName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 transactionDescription:(id)a1 merchant:(id)a2 currencyAmount:(id)a3 paymentMethod:(id)a4;

@end
