@interface ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long supportRequirement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportRequirement:(long long)a0;

@end
