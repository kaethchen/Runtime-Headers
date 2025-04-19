@class NSArray, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutCategoryList : FCPrivateDataController {
    NSMutableDictionary *_shortcutCategoriesByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSArray *blockedShortcutCategories;

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
- (void)addShortcutCategory:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)loadLocalCachesFromStore;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeAllShortcutCategories;
- (void)removeShortcutCategoryWithIdentifier:(id)a0;

@end
