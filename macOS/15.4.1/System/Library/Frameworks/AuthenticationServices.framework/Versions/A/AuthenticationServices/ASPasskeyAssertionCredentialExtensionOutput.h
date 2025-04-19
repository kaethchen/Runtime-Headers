@class ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput;

@interface ASPasskeyAssertionCredentialExtensionOutput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput *largeBlobAssertionOutput;

- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLargeBlobOutput:(id)a0;

@end
