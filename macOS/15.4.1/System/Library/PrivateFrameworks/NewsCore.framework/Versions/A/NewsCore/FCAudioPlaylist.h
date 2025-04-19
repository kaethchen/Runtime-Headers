@class NSArray, NSMutableDictionary, NSOrderedSet, NSDate, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) NSDate *modificationDate;

+ (id)desiredKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)save;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (id)dateAddedForArticleID:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeArticleID:(id)a0;

@end
