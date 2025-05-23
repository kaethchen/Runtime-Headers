@class NSOrderedSet, NSSet, NSDictionary, NSArray, NSMutableDictionary, FCMTWriterLock;
@protocol FCTagRanking;

@interface FCSubscriptionList : FCPrivateDataController <FCSubscriptionListType> {
    NSOrderedSet *_orderedSubscribedTagIDsInternal;
    NSSet *_subscribedTagIDsInternal;
    NSSet *_mutedTagIDsInternal;
    NSSet *_autoFavoriteTagIDsInternal;
    NSSet *_groupableTagIDsInternal;
    NSSet *_ignoredTagIDsInternal;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) NSSet *groupableTagIDs;
@property (readonly, copy, nonatomic) NSSet *ignoredTagIDs;
@property (readonly, copy, nonatomic) NSSet *allSubscribedTagIDs;
@property (retain, nonatomic) id<FCTagRanking> subscribedTagRanker;
@property (readonly, copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;

+ (id)desiredKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)subscriptionIDForTagID:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)hasIgnoredSubscriptionForTagID:(id)a0;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 groupID:(id)a3;
- (BOOL)addSubscriptionForTagID:(id)a0 type:(unsigned long long)a1 origin:(unsigned long long)a2 groupID:(id)a3 notificationsEnabled:(BOOL)a4;
- (void)addSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 originProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)appendSubscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (BOOL)canAddSubscription;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)handleSyncCompletion;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)hasAutoFavoriteSubscriptionForTagID:(id)a0;
- (BOOL)hasMutedSubscriptionForTagID:(id)a0;
- (BOOL)hasNotificationsEnabledForTagID:(id)a0;
- (BOOL)hasSubscriptionForTagID:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)loadLocalCachesFromStore;
- (BOOL)moveSubscriptionForTagID:(id)a0 toIndex:(unsigned long long)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeSubscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (void)removeSubscriptionsForTagIDs:(id)a0 typeProvider:(id /* block */)a1 completion:(id /* block */)a2;
- (void)reorderSubscriptionOrderForOrderedIdentifiers:(id)a0;
- (BOOL)setNotificationsEnabled:(BOOL)a0 forTagID:(id)a1;
- (id)subscriptionForTagID:(id)a0;
- (id)subscriptionForTagID:(id)a0 type:(unsigned long long)a1;
- (id)subscriptionForTagIDOfAnyType:(id)a0;
- (id)subscriptionsForType:(unsigned long long)a0;
- (id)t_reconcileSubscriptions:(id)a0;

@end
