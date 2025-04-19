@class ACAccount, CDPContext;
@protocol CDPDAuthProviderInternal;

@interface CDPDEDPRecoveryTokenUploader : NSObject {
    ACAccount *_account;
    CDPContext *_cdpContext;
    id<CDPDAuthProviderInternal> _authProvider;
}

- (void).cxx_destruct;
- (BOOL)_isTokenUploadable:(id)a0 reason:(unsigned long long)a1 error:(id *)a2;
- (void)_retryableUpload:(id)a0 completion:(id /* block */)a1;
- (void)_saveAccount;
- (id)initWithAccount:(id)a0 cdpContext:(id)a1 authProvider:(id)a2;
- (void)uploadRecoveryToken:(id)a0 tokenId:(id)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;

@end
