@class NSString, MTCoalescableWorkManifest, NSObject;
@protocol OS_dispatch_queue;

@interface MTCoalescableWorkController : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL verboseDebugLoggingEnabled;
@property (nonatomic) unsigned int qosClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) MTCoalescableWorkManifest *activeWorkManifest;
@property (retain, nonatomic) MTCoalescableWorkManifest *pendingWorkManifest;

+ (id)_uniqueGenericIdentifier;
+ (id)controllerWithQosClass:(unsigned int)a0 identifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)schedule:(id /* block */)a0;
- (void)_onWorkQueuePerformActiveWorkBlock;
- (void)_syncScheduleStartActiveWork:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_syncScheduleUpdatePendingWork:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 identifier:(id)a1;
- (void)schedule:(id /* block */)a0 completion:(id /* block */)a1;

@end
