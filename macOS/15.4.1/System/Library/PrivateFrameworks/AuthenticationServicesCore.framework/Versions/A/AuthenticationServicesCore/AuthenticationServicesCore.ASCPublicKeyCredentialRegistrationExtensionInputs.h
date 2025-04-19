@interface AuthenticationServicesCore.ASCPublicKeyCredentialRegistrationExtensionInputs : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ largeBlob;
    void /* unknown type, empty encoding */ prf;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL hasAtLeastOneExtension;
@property (nonatomic, readonly) long long caBLEAuthenticatorMinimumRequirement;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cborForHybrid;
- (id)cborForWebKit;
- (id)descriptionForLoggingWithIndentationCount:(long long)a0;

@end
