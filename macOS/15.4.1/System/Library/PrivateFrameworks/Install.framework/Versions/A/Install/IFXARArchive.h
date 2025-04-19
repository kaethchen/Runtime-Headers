@class NSArray, NSDictionary, NSMutableSet, IFCertificateIdentity;

@interface IFXARArchive : IFArchive {
    struct __xar_t { } *_archive;
    NSArray *_entries;
    NSDictionary *_entriesByPath;
    IFCertificateIdentity *_certificateIdentity;
    NSMutableSet *_verifiedEntries;
    long long _heapOffset;
}

- (void)dealloc;
- (id)entries;
- (id)archiveDigest;
- (struct __xar_t { } *)xar;
- (id)archiveIdentity;
- (id)_identifyForXARSignature:(struct __xar_signature_t { } *)a0;
- (BOOL)_loadCertificateIdentitiesAndVerifyData;
- (BOOL)_loadFileEntries;
- (id)digestOfPath:(id)a0 withType:(id)a1;
- (id)entryForPath:(id)a0;
- (BOOL)extractEntry:(id)a0 toBuffer:(id *)a1 withError:(id *)a2;
- (BOOL)extractEntry:(id)a0 toDestination:(id)a1 withError:(id *)a2;
- (id)initWithPath:(id)a0 withError:(id *)a1;
- (BOOL)verifyEntry:(id)a0 withError:(id *)a1;

@end
