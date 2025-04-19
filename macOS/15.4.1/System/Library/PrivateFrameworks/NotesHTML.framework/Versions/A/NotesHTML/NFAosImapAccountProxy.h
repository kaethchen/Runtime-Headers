@interface NFAosImapAccountProxy : NFIMAPAccountProxy

- (id)password;
- (void)setPassword:(id)a0;
- (id)oneTimePassword;
- (id)clientInfo;
- (id)machineID;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (id)_anisetteData;
- (BOOL)canAuthenticateWithScheme:(id)a0;
- (void)setSessionPassword:(id)a0;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)a0 host:(id)a1 didPromptUser:(BOOL *)a2;

@end
