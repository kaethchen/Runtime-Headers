@class NSData;

@interface SLSCCHmacContext : NSObject <ECAuthenticationMessageSigningContext> {
    struct unique_ptr<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester>> { struct __compressed_pair<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester *, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester>> { struct Digester *__value_; } __ptr_; } _digester;
}

@property (readonly, nonatomic) NSData *finalizedData;

+ (id)contextWithImplementingDigester:(struct unique_ptr<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester>> { struct __compressed_pair<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester *, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester>> { struct Digester *x0; } x0; })a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateSigningContextWithObject:(id)a0;
- (void)updateSigningContextWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)updateSigningContextWithData:(id)a0;

@end
