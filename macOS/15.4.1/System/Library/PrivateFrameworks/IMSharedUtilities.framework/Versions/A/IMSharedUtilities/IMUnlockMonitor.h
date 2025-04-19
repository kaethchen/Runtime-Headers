@interface IMUnlockMonitor : NSObject {
    void /* unknown type, empty encoding */ keybagChangeIOKitToken;
    void /* unknown type, empty encoding */ firstKeybagUnlockToken;
    void /* unknown type, empty encoding */ keybagChangeToken;
    void /* unknown type, empty encoding */ sbLockChangeToken;
    void /* unknown type, empty encoding */ initializedBeforeFirstUnlock;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ stringboardLockstateNotifificationKey;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (BOOL)isSystemLocked;
- (BOOL)isUnderFirstDataProtectionLock;
- (BOOL)hasReceivedFirstUnlockNotification;

@end
