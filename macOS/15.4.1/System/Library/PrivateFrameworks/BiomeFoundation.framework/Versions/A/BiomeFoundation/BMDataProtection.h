@class NSMutableOrderedSet;

@interface BMDataProtection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_callbacks;
    void *_aks;
}

+ (id)sharedInstance;
+ (void)unregister:(id)a0;
+ (BOOL)canOpenFilesForProtectionClass:(unsigned long long)a0;
+ (int)biomeProtectionClassToOSProtectionClass:(unsigned long long)a0;
+ (BOOL)canOpenFilesForProtectionClass:(unsigned long long)a0 createNewFile:(BOOL)a1;
+ (BOOL)isClassCXUnlocked;
+ (BOOL)losesReadAccessOnLock:(unsigned long long)a0;
+ (id)registerForLockStateChanges:(id)a0;
+ (BOOL)requiresUnlockToOpen:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_registerForLockStateChanges:(id /* block */)a0;
- (void)_unregister:(id)a0;
- (void)handleState:(int)a0;

@end
