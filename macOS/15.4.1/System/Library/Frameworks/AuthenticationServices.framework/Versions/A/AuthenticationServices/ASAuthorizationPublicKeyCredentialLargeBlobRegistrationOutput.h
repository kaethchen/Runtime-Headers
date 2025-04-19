@interface ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSupported;

+ (id)_outputWithIsSupported:(BOOL)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIsSupported:(BOOL)a0;

@end
