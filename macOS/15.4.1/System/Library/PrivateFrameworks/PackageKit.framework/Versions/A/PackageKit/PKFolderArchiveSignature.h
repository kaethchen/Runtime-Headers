@interface PKFolderArchiveSignature : PKArchiveSignature {
    struct __SecCode { } *_staticCode;
}

- (void)dealloc;
- (id)certificateRefs;
- (BOOL)verifySignedDataReturningError:(id *)a0;
- (id)algorithmType;
- (id)initWithArchiveAtPath:(id)a0;
- (id)signatureDataReturningAlgorithm:(id *)a0;
- (id)signedDataReturningAlgorithm:(id *)a0;
- (BOOL)verifyCodeSignatureIncludingSealedResources:(BOOL)a0 error:(id *)a1;

@end
