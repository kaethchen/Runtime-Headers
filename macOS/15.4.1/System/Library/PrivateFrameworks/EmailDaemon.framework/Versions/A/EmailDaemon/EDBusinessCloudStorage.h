@class EFLazyCache, NSString, EDMessagePersistence, NSHashTable, EDCategoryPersistence, EDBusinessPersistence, EFLocked;
@protocol EMMutableDictionaryProtocol, EFScheduler;

@interface EDBusinessCloudStorage : NSObject <EDBusinessChangeHookResponder, EMUbiquitouslyPersistedDictionaryDelegate, EMUbiquitouslyPersistedDictionaryDelegate_Private> {
    NSHashTable *_observers;
}

@property (readonly, nonatomic) EFLazyCache *syncKeyCache;
@property (readonly, nonatomic) EFLocked *deletedKeyMap;
@property (readonly, nonatomic) id<EMMutableDictionaryProtocol> persistentDictionary;
@property (readonly, nonatomic) id<EFScheduler> observerScheduler;
@property (retain, nonatomic) EDBusinessPersistence *businessPersistence;
@property (retain, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stopObserving:(id)a0;
- (void)removeAllEntries;
- (id)_categoryStringForCategoryType:(id)a0;
- (void)beginObserving:(id)a0;
- (id)_dateForKey:(id)a0 categoryType:(id)a1 businessWithExternalID:(id)a2;
- (id)_dictionaryForBusiness:(id)a0;
- (BOOL)_hasCategoryChanged:(id)a0 from:(id)a1;
- (id)_hashSchemeForGrouping:(long long)a0;
- (id)_mutableDictionaryForBusiness:(id)a0;
- (void)_removeDictionaryForBusiness:(id)a0;
- (BOOL)_setLastSeenDate:(id)a0 forCategoryType:(id)a1 onDictionary:(id)a2 isDisplayDate:(BOOL)a3;
- (void)_setMutableDictionary:(id)a0 forBusiness:(id)a1;
- (id)_syncKeyForExternalID:(id)a0;
- (void)_updateCategoryOverrideForBusinessExternalID:(id)a0;
- (void)_updateCategoryOverrideForBusinessID:(long long)a0 withBusinessExternalID:(id)a1;
- (id)categoryForBusinessWithExternalID:(id)a0 lastModifiedDate:(id *)a1;
- (id)initWithBusinessPersistence:(id)a0 categoryPersistence:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3;
- (id)lastSeenDateForCategoryType:(id)a0 businessWithExternalID:(id)a1;
- (id)lastSeenDisplayDateForCategoryType:(id)a0 businessWithExternalID:(id)a1;
- (id)mergeChangesForRemotelyChangedKeys:(id)a0 localStore:(id)a1 cloudStore:(id)a2;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)a0 deletedItems:(id)a1;
- (void)persistenceIsCreatingBusinessID:(long long)a0 withExternalBusinessID:(id)a1;
- (void)removeAllEntriesForBusinessWithExternalID:(id)a0;
- (void)removeCategoryForBusinessWithExternalID:(id)a0;
- (void)removeCategoryForBusinessWithExternalID:(id)a0 withLastModifiedDate:(id)a1;
- (void)scheduleRecurringActivity;
- (void)setCategory:(unsigned long long)a0 forBusinessWithExternalID:(id)a1;
- (void)setCategory:(unsigned long long)a0 forBusinessWithExternalID:(id)a1 withLastModifiedDate:(id)a2;
- (void)setIfNeededLastSeenDate:(id)a0 andDisplayDate:(id)a1 forCategoryType:(id)a2 businessWithExternalID:(id)a3;

@end
