@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject

@property (readonly) struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *asn1AlgId;
@property (readonly) MSOID *algorithm;
@property (readonly) NSData *parameters;

+ (id)digestAlgorithmWithSignatureAlgorithm:(id)a0 error:(id *)a1;
+ (id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *)a0 error:(id *)a1;
+ (id)algorithmIdentifierWithOID:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *)encode;
- (id)decode:(id)a0 error:(id *)a1;
- (unsigned int)ccMode:(id *)a0;
- (unsigned long long)blockSize:(id *)a0;
- (unsigned int)ccAlgorithm:(id *)a0;
- (id)initDigestAlgorithmWithSignatureAlgorithm:(id)a0 error:(id *)a1;
- (id)initWithAsn1AlgId:(struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } *)a0 error:(id *)a1;
- (id)initWithOID:(id)a0;
- (id)initWithOID:(id)a0 parameters:(id)a1;
- (unsigned long long)keySize:(id *)a0;
- (id)signatureAlgorithmWithDigestAlgorithm:(id)a0 error:(id *)a1;

@end
