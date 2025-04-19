@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSecureDefaults : NSObject <WBSPreferencesKeyValueStore> {
    NSString *_serviceName;
    NSString *_accessGroup;
    NSString *_keychainLabel;
    NSMutableDictionary *_defaultsDictionary;
    NSMutableSet *_migratedKeys;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_keychainQueue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    BOOL _hasPendingWrites;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id).cxx_construct;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithServiceName:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)setObject:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_boolForKeyOnInternalQueue:(id)a0;
- (id)_encodedURLForDefaults:(id)a0;
- (BOOL)_isPreferenceMigratedToSecureDefaults:(id)a0;
- (void)_loadDefaultsDictionary:(id *)a0 migratedKeysSet:(id *)a1;
- (void)_migrateKeychainItemIfNeeded;
- (id)_objectForKeyOnInternalQueue:(id)a0 performingMigrationToSecureDefaultsIfNecessary:(BOOL)a1;
- (void)_persistDefaultsDictionaryAndMigratedKeys;
- (void)_removeObjectForKeyOnInternalQueue:(id)a0;
- (void)_setObjectOnInternalQueue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setPreferenceWasMigratedToSecureDefaults:(id)a0;
- (void)_writeDefaultsDictionaryAndMigratedKeysAsynchronously;
- (void)_writeDefaultsDictionaryAndMigratedKeysSynchronously;
- (id)initWithServiceName:(id)a0 accessGroup:(id)a1 keychainLabel:(id)a2;
- (void)performSynchronousMigrationFromSecureDefaultsToUserDefaultsOfPreferences:(id)a0;
- (BOOL)safari_shouldTrustValueForKey:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerMigrationFromUserDefaultsToSecureDefaultsForPreference:(id)a0;

@end
