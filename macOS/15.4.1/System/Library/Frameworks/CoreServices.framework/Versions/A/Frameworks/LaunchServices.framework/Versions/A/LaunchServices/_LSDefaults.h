@class NSArray, NSMutableDictionary, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSURL *_baseSystemContainerURL;
    NSURL *_systemContainerURL;
    NSURL *_systemGroupContainerURL;
    NSData *_hmacSecret;
    NSMutableDictionary *_darwinNotificationNames;
    unsigned int _darwinNotificationNamesUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _darwinNotificationNamesLock;
    long long _currentDisplayGamut;
}

@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *databaseContainerDirectoryURL;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *systemContentDatabaseStoreFileURL;
@property (readonly) NSURL *unremappableDatabaseStoreFileURL;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *identifiersFileURL;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSURL *securePreferencesFileURL;
@property (readonly) NSURL *settingsStoreFileURL;
@property (readonly) NSURL *defaultAppQueryStateURL;
@property (getter=isServer) BOOL server;
@property (readonly, getter=isSystemServer) BOOL systemServer;
@property (readonly, getter=isUserServer) BOOL userServer;
@property (getter=isLightweightSystemServer) BOOL lightweightSystemServer;
@property BOOL hasServer;
@property (readonly) BOOL allowClientSideDatabaseCreation;
@property (readonly, getter=isInEducationMode) BOOL inEducationMode;
@property (readonly, getter=isUsingEphemeralStorage) BOOL usingEphemeralStorage;
@property (readonly) BOOL hasPersistentPreferences;
@property (readonly, getter=isInSyncBubble) BOOL inSyncBubble;
@property (readonly, nonatomic, getter=isInXCTestRigInsecure) BOOL inXCTestRigInsecure;
@property (readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (readonly, nonatomic) BOOL allowsAlternateIcons;
@property (readonly, nonatomic) BOOL abortIfMayNotMapDatabase;
@property (readonly, nonatomic) BOOL issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) BOOL allowsUnentitledExtensionPointDeclaration;
@property (readonly) BOOL nsExtensionUsesLSSettingsStore;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) BOOL markLocalizationsStoredInDatabase;
@property (readonly) BOOL alwaysUseDebugOpenWithMenus;
@property (readonly, getter=isRegionChina) BOOL regionChina;
@property (readonly) NSData *HMACSecret;
@property (readonly, nonatomic) NSURL *trustedSignatureDatabaseURL;

+ (id)sharedInstance;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)proxyUIDForUID:(unsigned int)a0;
- (id)_launchServicesPreferencesFolderURL;
- (BOOL)allowsUnentitledExtensionPointDeclaration;
- (BOOL)alwaysUseDebugOpenWithMenus;
- (id)classesWithNameForXCTests:(const char *)a0;
- (id)darwinNotificationNameForBaseName:(id)a0 optionalSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; } *)a1;
- (id)dataVaultURLWithUID:(unsigned int)a0;
- (id)databaseContainerURLWithUID:(unsigned int)a0;
- (id)databaseStoreFileURLWithUID:(unsigned int)a0;
- (id)databaseUpdateNotificationNameForSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; })a0;
- (BOOL)markLocalizationsStoredInDatabase;
- (BOOL)nsExtensionUsesLSSettingsStore;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (id)serviceNameForConnectionType:(unsigned short)a0;
- (id)serviceNameForConnectionType:(unsigned short)a0 lightweightSystemService:(BOOL)a1;
- (id)settingsUpdateNotificationNameForUserID:(unsigned int)a0;
- (id)simulatorRootURL;
- (id)simulatorRuntimeBuildVersion;
- (id)simulatorRuntimeVersion;
- (id)systemContainerBaseURL;
- (id)systemContentDatabaseStoreFileURLWithUID:(unsigned int)a0;
- (id)userPreferencesURL;

@end
