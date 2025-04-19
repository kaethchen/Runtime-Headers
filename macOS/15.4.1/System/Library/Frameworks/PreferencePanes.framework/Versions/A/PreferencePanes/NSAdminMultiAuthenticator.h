@class NSString, NSMutableArray;

@interface NSAdminMultiAuthenticator : NSObject <NSAdminPrefAuthenticator> {
    NSMutableArray *mAuthenticators;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiAuthenticator;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAuthenticated;
- (void)authenticateUsingAuthorization:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0 userName:(id)a1 password:(id)a2;
- (void)deauthenticate;
- (BOOL)wantsClearTextAuthentication;
- (void)addAuthenticator:(id)a0;
- (void)removeAuthenticator:(id)a0;

@end
