@interface PKMutableArchive : PKArchive

- (BOOL)addIntermediateCertificate:(struct __SecCertificate { } *)a0;
- (BOOL)addSignatureBySigningWithIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1;
- (BOOL)addSignatureBySigningWithIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1 usingTSAIfSupported:(BOOL)a2;
- (id)initForWritingToPath:(id)a0 error:(id *)a1;
- (id)initForWritingToPath:(id)a0 ofType:(id)a1 error:(id *)a2;
- (BOOL)setContentsOfArchive:(id)a0 forPath:(id)a1;
- (BOOL)setData:(id)a0 forPath:(id)a1 compressed:(BOOL)a2;
- (BOOL)setFile:(id)a0 forPath:(id)a1 compressed:(BOOL)a2;
- (void)setSignatureSize:(int)a0;

@end
