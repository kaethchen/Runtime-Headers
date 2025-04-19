@interface PKXARArchiveSignature : PKArchiveSignature {
    struct __xar_signature_t { } *_sig;
}

- (id)certificateRefs;
- (BOOL)_hasSigningCertificate:(struct __SecCertificate { } *)a0;
- (id)algorithmType;
- (id)initWithXARSignature:(struct __xar_signature_t { } *)a0;
- (id)signatureDataReturningAlgorithm:(id *)a0;
- (id)signedDataReturningAlgorithm:(id *)a0;

@end
