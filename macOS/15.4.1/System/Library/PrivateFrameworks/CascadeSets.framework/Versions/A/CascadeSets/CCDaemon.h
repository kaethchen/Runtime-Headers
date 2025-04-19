@class CCSetChangeRelayServer, NSObject;
@protocol OS_dispatch_queue;

@interface CCDaemon : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CCSetChangeRelayServer *_relayServer;
}

+ (void)registerXPCActivities;
+ (void)resetRootDirectoryIfNecessary;
+ (void)runNightlyMaintenanceActivity:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
