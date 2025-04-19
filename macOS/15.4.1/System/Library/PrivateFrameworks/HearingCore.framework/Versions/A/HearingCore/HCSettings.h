@class NSMutableSet, NSMutableDictionary;

@interface HCSettings : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;

+ (id)additionalInfoForPrefenceUpdate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (BOOL)_switchFromRootUserIfNecessary:(id /* block */)a0;
- (void)_registerForNotification:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_handlePreferenceChanged:(id)a0;
- (void)_synchronizeIfNecessary:(id)a0;
- (long long)integerValueForKey:(id)a0 withDefaultValue:(long long)a1;
- (id)objectValueForKey:(id)a0 withClass:(Class)a1 andDefaultValue:(id)a2;
- (id)_valueForPreferenceKey:(id)a0;
- (BOOL)boolValueForPreferenceKey:(id)a0 withDefaultValue:(BOOL)a1;
- (double)cgfloatValueForPreferenceKey:(id)a0 withDefaultValue:(double)a1;
- (id)keysMonitoredForUpdates;
- (id)keysToSync;
- (id)nanoPreferenceDomain;
- (id)notificationForPreferenceKey:(id)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)resetValueForSelector:(SEL)a0;
- (void)saveUpdateInfoIfNeededForPreferenceKey:(id)a0 toDomain:(struct __CFString { } *)a1;
- (BOOL)shouldSaveUpdateInfoForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;

@end
