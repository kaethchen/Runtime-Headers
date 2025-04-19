@class NSDistributedNotificationCenter, NSNotificationCenter, ABAccountRepository, NSObject;
@protocol OS_os_log, CNScheduler;

@interface ABDataSourceExternalNotificationObserver : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) ABAccountRepository *repository;
@property (readonly, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly, nonatomic) NSNotificationCenter *localNotificationCenter;
@property (readonly, nonatomic) id<CNScheduler> preprocessingScheduler;
@property (readonly, nonatomic) int sessionChangedToken;
@property (nonatomic) int session;
@property (nonatomic) int user;

+ (BOOL)isConsideredAquaSession:(int)a0;

- (void)dealloc;
- (id)init;
- (void)addSourceWithExternalNotification:(id)a0;
- (void)distributedAccountConfigurationDidChange:(id)a0;
- (void)distributedSourceAdded:(id)a0;
- (void)distributedSourceChanged:(id)a0;
- (void)distributedSourceRemoved:(id)a0;
- (void)distributedSourcesInvalidated:(id)a0;
- (void)extractUIDFromNotification:(id)a0 andRunBlock:(id /* block */)a1;
- (id)initWithRepository:(id)a0;
- (id)initWithRepository:(id)a0 distributedNotificationCenter:(id)a1 localNotificationCenter:(id)a2 preprocessingScheduler:(id)a3;
- (void)pool_distributedAccountConfigurationDidChange:(id)a0;
- (void)pool_distributedSourceAdded:(id)a0;
- (void)pool_distributedSourceChanged:(id)a0;
- (void)pool_distributedSourceRemoved:(id)a0;
- (void)pool_distributedSourcesInvalidated:(id)a0;
- (void)postAccountConfigurationDidChangeNotificationFromDistributedNotification:(id)a0;
- (void)postAddedExternallyNotificationFromDistributedNotification:(id)a0;
- (void)postChangedExternallyNotificationFromDistributedNotification:(id)a0;
- (void)postInvalidatedExternallyNotificationFromDistributedNotification:(id)a0;
- (void)postRemovedExternallyNotificationFromDistributedNotification:(id)a0;
- (void)removeSourceWithExternalNotification:(id)a0;
- (void)startObservingNotifications;
- (void)stopObservingNotifications;

@end
