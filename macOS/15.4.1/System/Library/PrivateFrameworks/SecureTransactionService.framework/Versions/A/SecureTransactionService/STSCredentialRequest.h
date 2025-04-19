@class NSString;

@interface STSCredentialRequest : NSObject <NSSecureCoding> {
    unsigned long long _type;
    NSString *_credentialIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
