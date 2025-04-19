@class NSString;

@interface PKStandaloneTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *displayableName;
@property (readonly, nonatomic) long long transactionType;
@property (readonly, nonatomic, getter=isWalletForeground) BOOL walletForeground;

+ (id)createForPassUniqueIdentifier:(id)a0 withDisplayableName:(id)a1 transactionType:(long long)a2 walletForeground:(BOOL)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
