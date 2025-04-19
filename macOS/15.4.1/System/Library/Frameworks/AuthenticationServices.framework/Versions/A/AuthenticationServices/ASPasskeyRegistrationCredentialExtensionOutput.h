@class ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput;

@interface ASPasskeyRegistrationCredentialExtensionOutput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput *largeBlobRegistrationOutput;

- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLargeBlobOutput:(id)a0;

@end
