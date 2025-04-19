@class ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput;

@interface ASPasskeyAssertionCredentialExtensionInput : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ coreExtensions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput *largeBlob;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoreExtensions:(id)a0;

@end
