@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (id)_init;
- (id)_connection;
- (void)prewarmSubscriptionData;
- (void)prewarmWithConfigCachePolicy:(unsigned long long)a0;
- (void)_onQueue_prewarmDevice;
- (void)_prefetchAppLibrary;
- (void)_prefetchIfNeeded:(id)a0 alwaysPrefetchConfig:(BOOL)a1;
- (void)_prewarmConfigurationWithConfigCachePolicy:(unsigned long long)a0;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;

@end
