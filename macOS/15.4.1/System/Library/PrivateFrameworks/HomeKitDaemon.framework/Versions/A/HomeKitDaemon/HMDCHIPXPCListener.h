@class NSXPCListener, HMDHomeManager, NSString, NSXPCInterface, NSMutableSet, NSObject, HMDProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDCHIPXPCListener : HMFObject <NSXPCListenerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSXPCListener *listener;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface;
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processMonitorQueue;
@property (readonly, nonatomic) HMDProcessMonitor *processMonitor;
@property (readonly, nonatomic) NSMutableSet *mutableConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)stop;
- (id)initWithHomeManager:(id)a0;
- (id)createClientConnectionWithRemoteObjectProxy:(id)a0 homeManager:(id)a1 connection:(id)a2 backgroundModeEntitled:(BOOL)a3;

@end
