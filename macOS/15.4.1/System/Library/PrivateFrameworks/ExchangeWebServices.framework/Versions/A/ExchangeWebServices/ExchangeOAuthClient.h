@interface ExchangeOAuthClient : NSObject

+ (id)state;
+ (id)clientID;
+ (id)clientRedirect;
+ (id)defaultScope;
+ (id)scopeForUpgradingFromBasicCreds;
+ (id)codeChallenge;
+ (id)codeChallengeMethod;
+ (id)codeVerifier;
+ (id)defaultScopeForHostURL:(id)a0 isOnPrem:(BOOL)a1;
+ (id)defaultScopesForDomain;
+ (id)defaultScopesWithoutDomain;
+ (BOOL)graphSyncEnabled;
+ (id)hostFQDNFromURL:(id)a0;

@end
