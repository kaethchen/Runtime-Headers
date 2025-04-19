@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) DCContext *context;

- (void).cxx_destruct;
- (BOOL)isVirtualMachine;
- (void)createPEMCertificateChainFrom:(id)a0 completion:(id /* block */)a1;
- (id)encryptData:(id)a0 serverSyncedDate:(id)a1 error:(id *)a2;
- (void)generateCertificateChainWithCompletion:(id /* block */)a0;
- (void)generateEncryptedCertificateChainWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 publicKey:(id)a1;
- (BOOL)isNSDate:(id)a0;
- (int)keybagHandle;
- (id)parseDERCertificatesFromChain:(id)a0;

@end
