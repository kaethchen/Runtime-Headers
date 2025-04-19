@class NSMutableArray;

@interface PKMutableXARArchive : PKXARArchive {
    NSMutableArray *_signers;
    BOOL _mutable;
}

- (void)dealloc;
- (BOOL)closeArchive;
- (struct __xar_file_t { } *)_fileStructForParentOfSubpath:(id)a0 error:(id *)a1;
- (BOOL)addIntermediateCertificate:(struct __SecCertificate { } *)a0;
- (BOOL)addSignatureBySigningWithIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1 usingTSAIfSupported:(BOOL)a2;
- (id)initForWritingToPath:(id)a0 error:(id *)a1;
- (BOOL)setContentsOfArchive:(id)a0 forPath:(id)a1;
- (BOOL)setData:(id)a0 forPath:(id)a1 compressed:(BOOL)a2;
- (BOOL)setFile:(id)a0 forPath:(id)a1 compressed:(BOOL)a2;
- (void)setSignatureSize:(int)a0;

@end
