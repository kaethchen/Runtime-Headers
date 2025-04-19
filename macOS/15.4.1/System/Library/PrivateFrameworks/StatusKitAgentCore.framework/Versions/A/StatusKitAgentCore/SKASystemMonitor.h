@class NSHashTable;

@interface SKASystemMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL underFirstLock;
@property (retain, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;

+ (id)sharedInstance;
+ (id)logger;

- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (BOOL)_deviceStillUnderFirstLock;
- (void)addListener:(id)a0;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;
- (void)_listenForKeyBagChangeNotifications;
- (void)_updateLockState;

@end
