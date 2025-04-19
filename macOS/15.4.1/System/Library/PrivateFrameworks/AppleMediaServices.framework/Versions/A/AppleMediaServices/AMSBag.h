@class AMSBagUnderlyingData, NSString, AMSBagUnderlyingDataPersistence, NSDate, AMSBagCachedValueUpdateHandlers, NSObject, AMSBagCache, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagDataSourceProtocol;

@interface AMSBag : NSObject <AMSBagProtocol>

@property (class, readonly) AMSBagCache *bagCache;

@property (readonly) NSObject<OS_dispatch_queue> *changeNotificationQueue;
@property (readonly) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (readonly) AMSBagUnderlyingDataPersistence *persistence;
@property (retain) AMSBagUnderlyingData *temporaryPreloadedBagData;
@property BOOL persistenceAPIWasCalled;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } updateHandlerConsistencyLock;
@property (readonly) BOOL persistenceIsEnabled;
@property (retain) id<AMSBagDataSourceProtocol> dataSource;
@property (copy) AMSProcessInfo *processInfo;
@property (readonly) AMSBagCachedValueUpdateHandlers *updateHandlers;
@property (readonly) NSString *descriptionExtended;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bagForProfile:(id)a0 profileVersion:(id)a1;
+ (id)_bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2 accountProvider:(id)a3;
+ (id)bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
+ (id)bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2 account:(id)a3;
+ (void)resetBagCache;
+ (id)sharedPersistenceQueue;
+ (id)sharedPersistenceWithDefaultDirectory;
+ (unsigned long long)uninitializedToken;

- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (BOOL)isLoaded;
- (id)initWithDataSource:(id)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)URLFromURLString:(id)a0;
- (id)URLFromURLString:(id)a0 account:(id)a1;
- (id)_availableValuesFromCachedData:(id)a0 keys:(id)a1 partialIdentifier:(id)a2 expirationDate:(id)a3 updateHandler:(id /* block */)a4 outToken:(unsigned long long *)a5;
- (id)_availableValuesFromPersistedBagData:(id)a0 error:(id)a1 keys:(id)a2 partialIdentifier:(id)a3 updateHandler:(id /* block */)a4 outToken:(unsigned long long *)a5;
- (void)_configureDataSourceHandlers;
- (id)_initWithDataSource:(id)a0 persistence:(id)a1 persistenceQueue:(id)a2 updateHandlers:(id)a3 shouldConfigureDataSourceHandlers:(BOOL)a4;
- (void)_loadAndPersistBag;
- (void)_persistBagDictionary:(id)a0 withIdentifier:(id)a1 partialIdentifier:(id)a2 expirationDate:(id)a3 onlyIfPreExisting:(BOOL)a4;
- (id)_temporaryDictionary;
- (id)cachedValuesForKeys:(id)a0 observationToken:(unsigned long long *)a1 updateHandler:(id /* block */)a2;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithDataSource:(id)a0 persistenceDirectoryURL:(id)a1 persistenceQueue:(id)a2 changeHandlerQueue:(id)a3 shouldConfigureDataSourceHandlers:(BOOL)a4;
- (id)initWithDataSource:(id)a0 shouldConfigureDataSourceHandlers:(BOOL)a1;
- (void)removeObserverWithToken:(unsigned long long)a0;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (void)waitUntilPersistenceWorkComplete;

@end
