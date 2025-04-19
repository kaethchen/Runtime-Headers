@class NSString;

@interface AuthenticationServicesCore.ASCPublicKeyCredentialAssertionExtensionOutputs : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ largeBlob;
    void /* unknown type, empty encoding */ prf;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
