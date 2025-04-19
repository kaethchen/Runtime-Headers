@class _FKWalletBankCredentialImporter;

@interface FKWalletBankCredentialImporter : NSObject

@property (retain, nonatomic) _FKWalletBankCredentialImporter *wrappedImporter;

- (id)init;
- (void).cxx_destruct;
- (void)insertBankCredentialFromBankInformation:(id)a0 completion:(id /* block */)a1;

@end
