@class AKSignInWithAppleAccount;

@interface AKAuthorizationSharedAccountLoginChoice : AKAuthorizationLoginChoice

@property (readonly, nonatomic) AKSignInWithAppleAccount *sharedAccount;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSignInWithAppleAccount:(id)a0;

@end
