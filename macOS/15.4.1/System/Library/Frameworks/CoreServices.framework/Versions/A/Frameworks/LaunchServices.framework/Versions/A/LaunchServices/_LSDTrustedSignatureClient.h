@interface _LSDTrustedSignatureClient : _LSDClient <_LSDTrustedSignatureProtocol>

- (void)getIsTrustedForURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isURLQuarantined:(id)a0;
- (void)trust:(BOOL)a0 URL:(id)a1 completionHandler:(id /* block */)a2;
- (id)trustedSignatureForURL:(id)a0 error:(id *)a1;
- (void)updateTrustExpirationDateForURL:(id)a0;

@end
