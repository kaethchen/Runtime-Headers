@class NSString, NSDictionary;

@interface ASCWebKitSPISupport : NSObject

@property (class, nonatomic) BOOL shouldUseAlternateCredentialStore;
@property (class, readonly, nonatomic) BOOL shouldUseAlternateKeychainAttribute;

+ (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)a0;
+ (void)getArePasskeysDisallowedForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)getClientCapabilitiesForRelyingParty:(NSString *)a0 withCompletionHandler:(void (^)(NSDictionary *))a1;
+ (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
+ (id)alternateLargeBlobIfNecessaryForRelyingParty:(id)a0 clientDataHash:(id)a1;
+ (id)asTransportsFrom:(id)a0;
+ (BOOL)canCurrentProcessAccessPasskeysForRelyingParty:(id)a0;
+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
+ (void)resetCredentialStore;
+ (BOOL)shouldApplyWorkaroundFor134591531;
+ (id)wkTransportsFrom:(id)a0;

@end
