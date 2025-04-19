@class NSCountedSet, NSMutableDictionary, NSString, NSMutableSet, NSHashTable;

@interface IMPhotoLibraryPersistenceManager : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierSaveStateCache;
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierFetchResultCache;
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierToAssetUUIDCache;
@property (retain, nonatomic) NSMutableSet *syndicationIdentifiersWithActiveFetch;
@property (retain, nonatomic) NSCountedSet *sessions;
@property (nonatomic) BOOL libraryAlreadyOpened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_assetFetchQueue;
+ (id)_photoLibraryInternalQueue;
+ (id)photosSyndicationIdentifiersForMessage:(id)a0 transcriptChatItem:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_notifyListeners;
- (void)photoLibraryDidChange:(id)a0;
- (id)_cachedSaveStateForIdentifier:(id)a0;
- (BOOL)_invalidateCacheDueToChanges:(id)a0;
- (void)_invalidateCaches;
- (BOOL)_isListenerRegistered:(id)a0;
- (void)_openPhotoLibraryIfNecessary;
- (void)cacheCompletedSaveForSyndicationIdentifiers:(id)a0;
- (unsigned long long)cachedCountOfSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)a0 shouldFetchAndNotifyAsNeeded:(BOOL)a1 didStartFetch:(BOOL *)a2;
- (void)fetchInfoForSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (void)registerPhotoLibraryPersistenceManagerListener:(id)a0;
- (void)registerPhotoLibraryPersistenceManagerSession:(id)a0;
- (void)unregisterAllPhotoLibraryPersistenceManagerListeners;
- (void)unregisterPhotoLibraryPersistenceManagerListener:(id)a0;
- (void)unregisterPhotoLibraryPersistenceManagerSession:(id)a0;

@end
