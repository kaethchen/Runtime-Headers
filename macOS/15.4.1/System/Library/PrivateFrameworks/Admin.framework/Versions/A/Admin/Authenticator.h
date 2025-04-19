@interface Authenticator : NSObject {
    BOOL _syncWaitDone;
}

@property (readonly) BOOL wantsClearTextAuthentication;

+ (id)sharedAuthenticator;
+ (id)sharedClearTextAuthenticator;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)isAuthenticated;
- (void)authenticateUsingAuthorization:(id)a0;
- (void)_toolStartedNotification:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0 userName:(id)a1 password:(id)a2;
- (BOOL)authenticateUsingAuthorizationSync:(id)a0;
- (void)authenticateUsingAuthorizationSync:(id)a0 userName:(id)a1 password:(id)a2;
- (void)authenticateUsingExternalForm:(id)a0;
- (BOOL)authenticateUsingExternalFormSync:(id)a0;
- (void)deauthenticate;
- (id)initClearTextAuthenticator;

@end
