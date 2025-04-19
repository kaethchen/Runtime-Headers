@class PKExpressTransactionState;

@interface PKExpressTransactionBannerHandleState : PKBannerHandleState <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKExpressTransactionState *transactionState;

+ (id)createForTransactionState:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
