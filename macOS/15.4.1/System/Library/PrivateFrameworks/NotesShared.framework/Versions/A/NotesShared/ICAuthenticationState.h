@class NSMutableDictionary, NSTimer, NSArray;
@protocol NSObject;

@interface ICAuthenticationState : NSObject <NSCopying>

@property (class, readonly, nonatomic) ICAuthenticationState *sharedState;
@property (class, readonly, nonatomic) double defaultDeauthenticationTimeInterval;

@property (nonatomic, getter=isAuthenticatedWithDevicePassword) BOOL authenticatedWithDevicePassword;
@property (retain, nonatomic) NSMutableDictionary *objectIDsToMainKey;
@property (nonatomic) long long blockingDeauthenticationCount;
@property (retain, nonatomic) NSTimer *deauthenticationTimer;
@property (nonatomic) BOOL didAttemptToDeauthenticateWhileBlocked;
@property (retain, nonatomic) id<NSObject> passphraseChangeObserver;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic, getter=isBlockingDeauthentication) BOOL blockingDeauthentication;
@property (readonly, nonatomic) BOOL hasAuthenticatedObject;
@property (nonatomic) double deauthenticationTimeInterval;
@property (retain, nonatomic) NSArray *deauthenticationTimerRunLoopModes;

+ (void)setSharedState:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deauthenticate;
- (void)setCachedMainKey:(id)a0 forIdentifier:(id)a1;
- (BOOL)setMainKeyInKeychain:(id)a0 forObject:(id)a1;
- (BOOL)authenticateObjectWithKeychain:(id)a0;
- (id)mainKeyFromKeychainForKeyObject:(id)a0 decryptingObject:(id)a1 cipherVersion:(long long)a2;
- (BOOL)addMainKeyToKeychainForObject:(id)a0;
- (BOOL)authenticateAllNotesInAccount:(id)a0 withPassphrase:(id)a1;
- (BOOL)authenticateObject:(id)a0 withPassphrase:(id)a1;
- (void)authenticateWithDevicePassword;
- (void)beginBlockingDeauthentication;
- (BOOL)biometricsEnabledForAccount:(id)a0;
- (id)cachedMainKeyForIdentifier:(id)a0;
- (id)cachedMainKeyForKeyObject:(id)a0 decryptingObject:(id)a1;
- (id)cachedMainKeyForObject:(id)a0;
- (BOOL)checkSupportsBiometrics;
- (void)deauthenticateAllObjects;
- (void)deauthenticateWithDevicePassword;
- (void)endBlockingDeauthentication;
- (void)extendDeauthenticationTimer;
- (id)faceIDEnabledKeyForAccountIdentifier:(id)a0;
- (void)localAuthenticationDidChangeBiometricsPolicyState:(id)a0;
- (id)mainKeyFromKeychainForObject:(id)a0;
- (id)mainKeyFromKeychainForObject:(id)a0 cipherVersion:(long long)a1;
- (id)mainKeyIdentifierForKeyObject:(id)a0 cipherVersion:(long long)a1;
- (BOOL)removeAllMainKeysFromKeychain;
- (BOOL)removeMainKeyFromKeychainForObject:(id)a0;
- (BOOL)removeMainKeysFromKeychainForAccount:(id)a0;
- (void)setBiometricsEnabled:(BOOL)a0 forAccount:(id)a1;
- (BOOL)setCachedMainKey:(id)a0 forObject:(id)a1;
- (id)touchIDEnabledKeyForAccountIdentifier:(id)a0;

@end
