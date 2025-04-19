@class SLDServiceProxy, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SLShareableContentObserver : NSObject <NSUserActivityObserver, SLDServiceProxyDelegate> {
    SLDServiceProxy *_serviceProxy;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (class, readonly, nonatomic) SLShareableContentObserver *sharedObserver;

@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) SLDServiceProxy *serviceProxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)reset;
- (void)userActivityWasCreated:(id)a0;
- (void)refreshIfNeeded;
- (void)addObservers;
- (BOOL)applicationIsActive;
- (void)resumeIfNeeded;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (void)setNeedsRefresh;
- (void)connectAndRefreshNow;
- (void)didBecomeActiveNotification:(id)a0;
- (void)didResignActiveNotification:(id)a0;
- (void)didResignMainWindowNotificaction:(id)a0;
- (BOOL)needsToRefresh;
- (BOOL)needsToResume;

@end
