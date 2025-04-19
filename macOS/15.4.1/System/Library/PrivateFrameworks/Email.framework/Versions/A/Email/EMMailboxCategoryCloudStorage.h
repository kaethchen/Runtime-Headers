@class EFLazyCache, NSString, NSHashTable, EFFuture, EMUbiquitouslyPersistedDictionary;
@protocol EFScheduler;

@interface EMMailboxCategoryCloudStorage : NSObject <EMUbiquitouslyPersistedDictionaryDelegate>

@property (readonly, nonatomic) EFFuture *ubiquitousDictionaryFuture;
@property (readonly, nonatomic) EMUbiquitouslyPersistedDictionary *ubiquitousDictionary;
@property (readonly, nonatomic) EFLazyCache *syncKeyByMailboxURLCache;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<EFScheduler> observerScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clearAll;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)a0 deletedItems:(id)a1;
- (void)addCloudStorageObserver:(id)a0;
- (id)lastSeenDateForCategoryType:(id)a0 inMailboxWithExternalURL:(id)a1;
- (id)lastSeenDisplayDateForCategoryType:(id)a0 inMailboxWithExternalURL:(id)a1;
- (void)removeCloudStorageObserver:(id)a0;
- (BOOL)setIfNeededLastSeenDate:(id)a0 lastSeenDisplayDate:(id)a1 forCategoryType:(id)a2 inMailboxWithExternalURL:(id)a3 originator:(unsigned long long)a4;

@end
