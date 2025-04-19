@class NSString, NSSet, NSArray, NSMutableSet;

@interface PXSettings : _UXSettings <PXTapToRadarDiagnosticProvider> {
    NSMutableSet *_archivedSettings;
    NSSet *_cachedTransientProperties;
    BOOL _hasUserDefaultsOverrides;
}

@property (class, copy, nonatomic) NSString *suiteName;
@property (class, readonly, nonatomic) NSSet *transientProperties;

@property (readonly, nonatomic) PXSettings *parentSettings;
@property (readonly, nonatomic) NSArray *reparentedRootSettings;
@property (readonly, nonatomic) BOOL hasUserDefaultsOverrides;
@property (readonly, nonatomic) BOOL hasDefaultValues;
@property (nonatomic) long long version;

+ (id)sharedInstance;
+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;
+ (id)_defaultsKey;
+ (id)_userDefaults;
+ (id)_signatureDictionaryWithDefaultSettings:(id *)a0;
+ (id)createSharedInstance;

- (void).cxx_destruct;
- (void)save;
- (void)addKeyObserver:(id)a0;
- (void)addKeyPathObserver:(id)a0;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)a0;
- (void)removeKeyObserver:(id)a0;
- (void)removeKeyPathObserver:(id)a0;
- (void)restoreDefaultValues;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;
- (id)_archiveDictionaryWithSignature;
- (BOOL)isTransientKey:(id)a0;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)a0 andArchivedDefaultValues:(id)a1 defaultSettings:(id)a2;
- (BOOL)_setOverrideValuesFromDictionary:(id)a0;
- (void)_validateArchivableValue:(id)a0 forKey:(id)a1;
- (void)_willArchiveSettings:(id)a0;
- (void)addDeferredKeyObserver:(id)a0;
- (void)addDeferredKeyPathObserver:(id)a0;
- (void)clearManualOverrides;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)defaultValueDidChangeForKey:(id)a0;
- (BOOL)isTransientKeyPath:(id)a0;
- (void)performPostSaveActions;

@end
