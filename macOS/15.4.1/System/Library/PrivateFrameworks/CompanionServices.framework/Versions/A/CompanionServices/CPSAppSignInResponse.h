@class AKAuthorization, CASPasswordCredential;
@protocol ASAuthorizationCredential;

@interface CPSAppSignInResponse : CPSAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AKAuthorization *appleIDAuthorization;
@property (readonly, nonatomic) CASPasswordCredential *passwordCredential;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;
@property (readonly, nonatomic) AKAuthorization *authorization;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppleIDAuthorization:(id)a0;
- (id)initWithPasswordCredential:(id)a0;

@end
