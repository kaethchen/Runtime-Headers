@class NSDate, NSString, AMSBagNetworkTaskResult, AMSObserver, NSMutableDictionary, AMSBagNetworkTask, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagAccountProvider;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>

@property (retain) AMSObserver *accountsChangedObserver;
@property (readonly) id<AMSBagAccountProvider> accountProvider;
@property (retain) AMSBagNetworkTaskResult *cachedResult;
@property (readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } cachedDataAccessLock;
@property (retain, nonatomic) NSString *cachedStorefront;
@property (retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain) AMSBagNetworkTask *currentLoadTask;
@property (retain) NSMutableDictionary *defaultValues;
@property (readonly) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (readonly) NSDate *expirationDate;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) NSString *bagLoadingPartialIdentifier;
@property (readonly, copy) AMSProcessInfo *processInfo;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (retain) NSString *descriptionExtended;
@property (copy) id /* block */ dataSourceChangedHandler;
@property (copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_valueForURLVariable:(id)a0 account:(id)a1 clientInfo:(id)a2 sync:(BOOL)a3 completion:(id /* block */)a4;
+ (id)requestPartialIdentifierForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2;
+ (id)valueForURLVariable:(id)a0 account:(id)a1 clientInfo:(id)a2;
+ (void)valueForURLVariable:(id)a0 account:(id)a1 clientInfo:(id)a2 completion:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)defaultValueForKey:(id)a0;
- (void)_accountStoreDidChange;
- (id)_fetchBag;
- (void)_invalidateCacheNotification:(id)a0;
- (id)_newCompletionQueue;
- (void)_updateCachedResult:(id)a0;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2 accountProvider:(id)a3;
- (void)loadWithCompletion:(id /* block */)a0;
- (id)loadedValuesForKeys:(id)a0 outExpirationDate:(id *)a1;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (void)valueForURLVariable:(id)a0 account:(id)a1 completion:(id /* block */)a2;

@end
