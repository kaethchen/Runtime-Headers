@interface SYDPlistToCoreDataMigrator : NSObject

+ (BOOL)isSharedIPad;
+ (void)addPlistURLsAndStoreIdentifiersForBundleRecord:(id)a0 toDictionary:(id)a1 uncontainerizedSyncedPreferencesDirectoryURL:(id)a2;
+ (void)addPlistURLsAndStoreIdentifiersForKnownDaemonsToDictionary:(id)a0 uncontainerizedSyncedPreferencesDirectoryURL:(id)a1;
+ (void)addPlistURLsForBundleIdentifier:(id)a0 defaultStoreIdentifier:(id)a1 additionalStoreIdentifiers:(id)a2 toDictionary:(id)a3 syncedPreferencesDirectoryURL:(id)a4;
+ (id)allPossibleStorePlistURLsWithLibraryDirectoryURL:(id)a0;
+ (id)keyValueStorePlistFromURL:(id)a0 error:(id *)a1;
+ (id)knownDaemons;
+ (BOOL)migrateAllPlistsIfNecessaryToCoreDataStore:(id)a0 deleteMigratedPlists:(BOOL)a1 error:(id *)a2;
+ (BOOL)migrateAllPlistsIfNecessaryToCoreDataStore:(id)a0 deleteMigratedPlists:(BOOL)a1 libraryDirectoryURL:(id)a2 error:(id *)a3;
+ (BOOL)migrateAllPlistsToCoreDataStore:(id)a0 deleteMigratedPlists:(BOOL)a1 libraryDirectoryURL:(id)a2 error:(id *)a3;
+ (BOOL)migratePlist:(id)a0 forStoreWithIdentifier:(id)a1 toCoreDataStore:(id)a2 error:(id *)a3;
+ (BOOL)shouldIncrementFailureCountForError:(id)a0;
+ (BOOL)shouldStopMigrationAfterError:(id)a0;
+ (BOOL)shouldUseTransactionForPlistAtURL:(id)a0;

@end
