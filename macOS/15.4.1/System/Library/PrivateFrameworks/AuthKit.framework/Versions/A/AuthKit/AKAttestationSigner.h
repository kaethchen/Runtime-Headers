@interface AKAttestationSigner : NSObject

@property (class, readonly, nonatomic) AKAttestationSigner *sharedSigner;

- (id)init;
- (void)_baaSignatureForData:(id)a0 completion:(id /* block */)a1;
- (void)_baaSignaturesForData:(id)a0 completion:(id /* block */)a1;
- (void)signatureForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signaturesForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
