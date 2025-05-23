@interface SFX509TrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _x509TrustPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
