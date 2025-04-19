@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount {
    MFEWSAccount *_ewsAccount;
}

@property BOOL stripsFromHeaderWhenSending;
@property (weak) MFEWSAccount *associatedAccount;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)identifier;
- (id)password;
- (void)setPassword:(id)a0;
- (id)displayName;
- (BOOL)isDynamic;
- (id)initWithAccount:(id)a0;
- (id)username;
- (void)setUsername:(id)a0;
- (id)hostname;
- (long long)portNumber;
- (void)setPortNumber:(long long)a0;
- (BOOL)requiresAuthentication;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)a0;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (id)accountTypeString;
- (void)setHostname:(id)a0;
- (BOOL)usesSSL;
- (id)initWithAccountInfo:(id)a0;
- (id)saslProfileName;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (id)authenticationScheme;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (id)initWithSystemAccount:(id)a0;
- (void)setAuthenticationScheme:(id)a0;
- (id)standardPorts;
- (id)standardSSLPorts;
- (id)canonicalEmailAddress;
- (struct __SecIdentity { } *)copyTLSIdentity;
- (void)_setPortNumber:(long long)a0 releasingConnections:(BOOL)a1;
- (void)_setSecurityLayerType:(long long)a0 releasingConnections:(BOOL)a1;
- (void)_setUsesSSL:(BOOL)a0 releasingConnections:(BOOL)a1;
- (id)authenticatedConnection;
- (BOOL)canGoOffline;
- (BOOL)connectAndAuthenticate:(id)a0;
- (id)deliveryIdentifier;
- (void)discoverConnectionProperties;
- (BOOL)discoverConnectionPropertiesAndWait;
- (BOOL)isWillingToGoOnline;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)a0 withConnectTimeout:(double)a1 readWriteTimeout:(double)a2;
- (id)newDelivererWithMessage:(id)a0;
- (id)offlineDisplayName;
- (id)preferredAuthScheme;
- (void)releaseAllConnections;
- (id)remoteMailAccountsEmployedBy;
- (long long)securityLayerType;
- (void)setCanonicalEmailAddress:(id)a0;
- (void)setDisplayName;
- (void)setIsWillingToGoOnline:(BOOL)a0;
- (void)setPreferredAuthScheme:(id)a0;
- (void)setShouldUseAuthentication:(BOOL)a0;
- (void)setStoredDisplayName;
- (void)setValidationRequired:(BOOL)a0;
- (BOOL)shouldUseAuthentication;
- (id)storedDisplayName;
- (void)validateConnections;
- (BOOL)validationRequired;

@end
