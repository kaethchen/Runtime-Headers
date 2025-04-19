@class CNCache, CNUnfairLock, NSObject;
@protocol OS_os_log, OS_dispatch_semaphore, CNScheduler;

@interface CNContactProviderSupportModerator : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNCache *cache;
@property (readonly, nonatomic) CNUnfairLock *lock;
@property (readonly, nonatomic) id<CNScheduler> workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *workSemaphore;

+ (id)sharedInstance;
+ (id)synchronizeAllUsingSession:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)evictPromiseForBundleIdentifier:(id)a0;
- (id)synchronizeProviderDomainUsingSession:(id)a0 bundleIdentifier:(id)a1 providerHost:(id)a2;

@end
