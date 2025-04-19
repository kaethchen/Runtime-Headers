@interface SLSSigningKey : NSObject <ECAuthenticationKey, NSSecureCoding> {
    struct unique_ptr<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Key, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Key>> { struct __compressed_pair<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Key *, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Key>> { struct Key *__value_; } __ptr_; } _key;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)key;
+ (id)keyWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (id)createSignatureForMessage:(id)a0;
- (id)signingContext;

@end
