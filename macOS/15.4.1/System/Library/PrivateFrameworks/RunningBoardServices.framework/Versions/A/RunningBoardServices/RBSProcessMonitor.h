@class NSSet, NSMutableDictionary, NSObject, RBSProcessMonitorConfiguration;
@protocol OS_dispatch_queue, RBSServiceLocalProtocol;

@interface RBSProcessMonitor : NSObject <RBSProcessMonitorConfiguring, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<RBSServiceLocalProtocol> _service;
    BOOL _valid;
    BOOL _configuring;
    NSMutableDictionary *_stateByIdentity;
}

@property (readonly, nonatomic) RBSProcessMonitorConfiguration *configuration;
@property (readonly, nonatomic) unsigned long long events;
@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy, nonatomic) NSSet *states;

+ (id)monitorWithConfiguration:(id /* block */)a0;
+ (id)monitor;
+ (id)_monitorWithService:(id)a0;
+ (id)_monitorWithService:(id)a0 configuration:(id /* block */)a1;
+ (id)monitorWithPredicate:(id)a0 updateHandler:(id /* block */)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setPredicates:(id)a0;
- (void)setStateDescriptor:(id)a0;
- (void)setUpdateHandler:(id /* block */)a0;
- (void)updateConfiguration:(id /* block */)a0;
- (void)setEvents:(unsigned long long)a0;
- (void)setServiceClass:(unsigned int)a0;
- (void)_handleExitEvent:(id)a0;
- (void)_handlePreventLaunchUpdate:(id)a0;
- (void)_handleProcessStateChange:(id)a0;
- (void)setPreventLaunchUpdateHandle:(id /* block */)a0;
- (id)stateForIdentity:(id)a0;
- (id)states;

@end
