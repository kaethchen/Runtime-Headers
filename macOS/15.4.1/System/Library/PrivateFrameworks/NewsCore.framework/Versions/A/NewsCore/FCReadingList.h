@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

+ (id)desiredKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addArticleToReadingList:(id)a0;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)allNonConsumedArticleIDs;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (id)allSortedArticleIDsInReadingList;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)clearArticlesFromReadingList;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;
- (id)dateArticleWasAdded:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)isArticleOnReadingList:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeArticleFromReadingList:(id)a0;
- (BOOL)shouldHideHeadline:(id)a0;

@end
