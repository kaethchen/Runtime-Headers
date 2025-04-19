@class PLPhotoLibraryBundle, PLSyndicationIngestMutex, PLLazyObject;

@interface PLDatabaseContext : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyMomentLibrary;
}

@property (readonly) PLSyndicationIngestMutex *syndicationIngestMutex;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;

+ (id)newShortLivedLibraryWithName:(const char *)a0 bundle:(id)a1;
+ (id)newShortLivedLibraryWithName:(const char *)a0 libraryRole:(unsigned long long)a1 bundle:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLibraryBundle:(id)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0 libraryRole:(unsigned long long)a1;
- (id)momentLibrary;
- (id)newMomentLibrary;
- (id)newShortLivedComputeSyncApplyLibraryWithNameSuffix:(const char *)a0;
- (id)newShortLivedCplLibraryWithNameSuffix:(const char *)a0;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(const char *)a0;
- (id)newShortLivedLibraryForOrderKeyManagerWithName:(const char *)a0;
- (id)newShortLivedMacOpenClientLibraryWithName:(const char *)a0;
- (void)perform:(id /* block */)a0 withName:(const char *)a1;
- (void)performSync:(id /* block */)a0 withName:(const char *)a1;
- (void)performTransaction:(id /* block */)a0 withName:(const char *)a1;
- (void)performTransactionSync:(id /* block */)a0 withName:(const char *)a1;

@end
