@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SUHelperProxy : NSObject <SUHelperDProtocol> {
    unsigned int _suhelperd_port;
    unsigned int _client_port;
    long long _currentRights;
    NSObject<OS_dispatch_queue> *_q;
    NSObject<OS_dispatch_source> *clientPortDeadChecker;
}

@property long long recentRights;

+ (id)sharedHelperProxy;
+ (id)sharedHelperProxyIfAvailable;

- (void)dealloc;
- (id)init;
- (BOOL)disconnect;
- (BOOL)setObject:(id)a0 forAnyUserPreference:(id)a1;
- (BOOL)_isAuthorized;
- (unsigned long long)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)a0;
- (void)authorizeTool:(struct AuthorizationOpaqueRef { } *)a0 forRights:(long long)a1;
- (void)authorizeWithEmptyAuthorizationForRights:(long long)a0;
- (unsigned long long)cacheDeletePurgeableSpace;
- (void)checkAndFixPermissionsAtPath:(id)a0 owner:(unsigned int)a1;
- (BOOL)clearAnyUserPreference:(id)a0;
- (BOOL)clearCatalogToProductionAndNotify;
- (BOOL)commitLoginCredentialsDisablingFLO:(BOOL)a0 hasBaseSystemUpdates:(BOOL)a1;
- (BOOL)configureProgressPhasesAll:(id)a0;
- (BOOL)createDirectoryForProductKey:(id)a0 Firmware:(BOOL)a1;
- (BOOL)deletePref:(id)a0 inDomain:(id)a1;
- (BOOL)getDigest:(id *)a0 forPackageAtURL:(id)a1;
- (void)helperQueueReentrantSync:(id /* block */)a0;
- (BOOL)isAuthorizedForRights:(long long)a0;
- (id)lookupURLCredentialInSystemKeychainForHost:(id)a0 port:(long long)a1;
- (BOOL)makeQueues;
- (BOOL)moveInstalledPrintersToLibraryFromPath:(id)a0;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)a0;
- (BOOL)movePPDVersionCacheToUpdatesFromPath:(id)a0;
- (int)prepareForLogoutAndInstall;
- (BOOL)prepareLoginWindowForPostLogoutInstallWithNoConsoleUser;
- (BOOL)readFactoryVersion:(id *)a0;
- (id)readUpdatesIndex;
- (BOOL)rebootForPostLogoutUpdatesAfterSuccess:(BOOL)a0 nightInstall:(BOOL)a1 shouldShutDown:(BOOL)a2;
- (id)registerProductFile:(id)a0 forProductKey:(id)a1 firmware:(BOOL)a2 trustLevel:(int *)a3 keepOriginal:(BOOL)a4;
- (id)registerProductFile:(id)a0 forProductKey:(id)a1 firmware:(BOOL)a2 trustLevel:(int *)a3 keepOriginal:(BOOL)a4 inForeground:(BOOL)a5;
- (BOOL)removeIndexFromUpdates;
- (BOOL)removePackagesForLocalReferences:(id)a0 forProductKey:(id)a1;
- (BOOL)removeProductDirectoryForKey:(id)a0;
- (BOOL)setAppStoreAutoUpdate:(BOOL)a0;
- (BOOL)setAppleStagedUpgradeShouldFLORun:(BOOL)a0;
- (BOOL)setAppleUpgradeShouldFLORun:(BOOL)a0;
- (BOOL)setMacOSAutoUpdate:(BOOL)a0;
- (BOOL)setNVRAMWithKey:(id)a0 value:(id)a1;
- (BOOL)stashAndCommitAPFSFDEKey;
- (BOOL)stashLoginCredentialsEnablingFLO:(BOOL)a0;
- (BOOL)updateAnyUserPreferences;
- (BOOL)writeUpdatesIndex:(id)a0;

@end
