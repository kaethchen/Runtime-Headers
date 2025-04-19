@class NFSession;

@interface UnifiedAccessHandler : STSTransactionHandler {
    NFSession *_nfSession;
}

- (void).cxx_destruct;
- (id)stopTransaction;
- (id)setActiveCredential:(id)a0;
- (id)setActiveCredentials:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)startNFSessionWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;

@end
