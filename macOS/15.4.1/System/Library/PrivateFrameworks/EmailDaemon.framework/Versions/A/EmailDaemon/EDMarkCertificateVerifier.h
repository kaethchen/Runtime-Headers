@class NSArray;

@interface EDMarkCertificateVerifier : NSObject {
    struct EFAtomicObject { _Atomic long long cfObject; } _vmcRootCertificates;
}

@property (readonly, copy, nonatomic) NSArray *vmcRootCertificates;

- (BOOL)verifyIndicatorData:(id)a0 withMarkCertificateData:(id)a1 forPersistedMessage:(id)a2;
- (BOOL)verifyIndicatorData:(id)a0 withMarkCertificateData:(id)a1 forServerSyncedMessage:(id)a2;

@end
