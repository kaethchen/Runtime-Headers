@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {
    BOOL _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (id)_autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)a0 libraryServicesManager:(id)a1 wellKnownLibraryIdentifier:(long long *)a2;
+ (BOOL)_checkLibraryDeletionTombstoneForLibraryURL:(id)a0;
+ (BOOL)_deleteLibraryFromFilesystemAtURL:(id)a0 shouldWriteTombstone:(BOOL)a1 error:(id *)a2;
+ (BOOL)_prepareLibraryForDeletionWithTombstone:(BOOL)a0 libraryURL:(id)a1 error:(id *)a2;
+ (id)_resolvePhotoLibraryBundleURLWithOptions:(id)a0 error:(id *)a1;
+ (BOOL)_validateUniqueLibraryIdentifierUUIDWithCreationOptions:(id)a0;
+ (id)autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)a0 libraryServicesManager:(id)a1 wellKnownLibraryIdentifier:(long long *)a2;
+ (BOOL)canAutomaticallyCreateLibrary;
+ (id)createManagedPhotoLibraryOnFilesystemWithOptions:(id)a0 error:(id *)a1;
+ (BOOL)deleteLibraryFromFilesystemAtURL:(id)a0 shouldWriteTombstone:(BOOL)a1 error:(id *)a2;
+ (void)performAtomicLibraryIdentifierAccessBlock:(id /* block */)a0;
+ (BOOL)prepareLibraryForDeletionWithTombstone:(BOOL)a0 libraryURL:(id)a1 error:(id *)a2;
+ (id)runningLibraryServicesManagerForPhotoLibraryURL:(id)a0 error:(id *)a1;
+ (id)runningLibraryServicesManagerForWellKnownPhotoLibraryIdentifier:(long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)_createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (id)initWithLibraryServicesManager:(id)a0 reportInProgressUpgrades:(BOOL)a1;
- (BOOL)lightweightPermissionCheckWithError:(id *)a0;
- (BOOL)lightweightPermissionCheckWithPath:(id)a0 isDir:(BOOL)a1 error:(id *)a2;
- (BOOL)openPhotoLibraryDatabaseWithAutoUpgrade:(BOOL)a0 autoCreate:(BOOL)a1 error:(id *)a2;

@end
