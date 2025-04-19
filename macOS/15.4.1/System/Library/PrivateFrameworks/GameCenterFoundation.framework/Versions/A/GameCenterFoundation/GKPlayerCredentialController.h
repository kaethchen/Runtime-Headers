@class NSDate, NSString, ACAccountStore, GKThreadsafeDictionary, GKSignInVisibilityManager;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain, nonatomic) NSString *gameBundleId;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property (retain, nonatomic) GKSignInVisibilityManager *signInVisibilityManager;
@property (nonatomic) BOOL lastSaveFailed;
@property (retain, nonatomic) NSDate *lastRenewalAttempt;

+ (id)sharedController;
+ (id)accessQueue;
+ (void)migrateOldAccountInformation;

- (id)init;
- (void).cxx_destruct;
- (id)accessQueue;
- (void)accountStoreDidChange:(id)a0;
- (id)suggestedUsername;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (id)_transactAndWait:(id /* block */)a0;
- (void)accountStoreEmailDidChange:(id)a0;
- (id)allCredentialsForEnvironment:(long long)a0;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (id)credentialForPlayerID:(id)a0 environment:(long long)a1;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (id)initWithStore:(id)a0 notificationCenter:(id)a1;
- (void)invalidateCredentialCaches;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (id)primaryCredentialForEnvironment:(long long)a0 accountStore:(id)a1;
- (id)pushCredentialForEnvironment:(long long)a0;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)renewCredentialForUsername:(id)a0 ttl:(double)a1 completionHandler:(id /* block */)a2;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;
- (void)setContactAssociationID:(id)a0 contactIntegrationConsent:(int)a1 serviceLastUpdateTimestamp:(id)a2 forEnvironment:(long long)a3 forcefully:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;

@end
