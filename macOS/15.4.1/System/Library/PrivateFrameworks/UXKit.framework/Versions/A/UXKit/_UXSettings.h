@class NSString, NSSet, NSHashTable, NSDictionary, NSObject;
@protocol OS_os_log;

@interface _UXSettings : NSObject <_UXSettingsGroupObserver, _UXSettingsKeyPathObserver, NSCopying> {
    NSHashTable *_internal_keyObservers;
    NSHashTable *_internal_keyPathObservers;
    NSSet *_internal_childKeys;
    NSSet *_internal_leafKeys;
    NSDictionary *_internal_keyClasses;
    NSDictionary *_internal_keyStructs;
    BOOL _internal_isObservingPropertiesAndChildren;
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsFromArchiveDictionary:(id)a0;
+ (id)settingsFromArchiveFile:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_allKeys;
- (void)addKeyObserver:(id)a0;
- (BOOL)_hasObservers;
- (id)_initWithArchiveDictionary:(id)a0;
- (id)_keyForChild:(id)a0;
- (void)_sendKeyChanged:(id)a0;
- (void)_sendKeyPathChanged:(id)a0;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)addKeyPathObserver:(id)a0;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)a0;
- (id)initWithDefaultValues;
- (void)removeKeyObserver:(id)a0;
- (void)removeKeyPathObserver:(id)a0;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)a0;
- (void)setDefaultValues;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (BOOL)archiveToFile:(id)a0 error:(id *)a1;
- (BOOL)restoreFromArchiveFile:(id)a0 error:(id *)a1;
- (void)setValuesFromModel:(id)a0;
- (id)_associatedName;
- (id)_dictionaryForStructKey:(id)a0 ofType:(id)a1;
- (void)_introspectKeys;
- (void)_addInternalEntriesToArchiveDictionary:(id)a0;
- (id)_associatedNameOrNilIfDefault;
- (id)_colorForKey:(id)a0 fromDictionary:(id)a1;
- (void)_completeInitByApplyingArchiveDictionary:(id)a0;
- (void)_continueInitBySettingDefaultValues;
- (id)_dictionaryForColorKey:(id)a0;
- (id)_dictionaryForFontKey:(id)a0;
- (id)_fontForKey:(id)a0 fromDictionary:(id)a1;
- (void)_handleChildGroupChange:(id)a0;
- (BOOL)_isObservingPropertiesAndChildren;
- (void)_setAssociatedName:(id)a0;
- (id)_startInit;
- (void)_startObservingChild:(id)a0;
- (void)_startObservingPropertiesAndChildren;
- (void)_stopObservingChild:(id)a0;
- (void)_stopObservingPropertiesAndChildren;
- (id)_structValueForKey:(id)a0 ofType:(id)a1 fromDictionary:(id)a2;
- (void)settingsGroup:(id)a0 didInsertSettings:(id)a1 atIndex:(unsigned long long)a2;
- (void)settingsGroup:(id)a0 didMoveSettings:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)settingsGroup:(id)a0 didRemoveSettings:(id)a1 atIndex:(unsigned long long)a2;

@end
