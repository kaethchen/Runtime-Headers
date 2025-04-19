@class AMSDelegateAuthenticateResult;

@interface CPSStoreAuthenticationResponse : CPSAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegateAuthenticateResult *authenticationResult;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthenticationResult:(id)a0;

@end
