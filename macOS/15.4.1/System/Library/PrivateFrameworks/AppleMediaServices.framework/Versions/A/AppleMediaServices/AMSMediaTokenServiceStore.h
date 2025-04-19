@class AMSMediaTokenServiceKeychainStore, NSString, AMSMediaToken;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (readonly, nonatomic) NSString *notificationObject;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;
@property (readonly, nonatomic) BOOL usingAccessControlIdentifier;

+ (BOOL)_hasAppleGroupEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (id)_keychainAccessGroup;
- (void)_mediaTokenChanged:(id)a0;
- (id)_mediaTokenChangedNotificationName;
- (id)_mediaTokenFromUserDefaults;
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;
- (void)deleteToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 usingAccessControlIdentifier:(BOOL)a2;
- (id)initWithClientIdentifier:(id)a0 keychainStore:(id)a1;
- (id)retrieveToken;
- (void)storeToken:(id)a0;

@end
