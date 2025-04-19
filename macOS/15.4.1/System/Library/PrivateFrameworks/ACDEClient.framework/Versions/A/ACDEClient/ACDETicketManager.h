@interface ACDETicketManager : ACMExternalTicketManager

- (unsigned long long)clientID;
- (BOOL)storeToken:(id)a0;
- (id)accountNameForPrincipal:(id)a0;
- (id)keychainInfoForPrincipal:(id)a0;
- (void)tokenDidReceive2SVSecret:(id)a0;
- (id)twoSVCreateDateForPrincipal:(id)a0;
- (id)twoSVPersonIDForPrincipal:(id)a0;
- (id)twoSVSecretForPrincipal:(id)a0;

@end
