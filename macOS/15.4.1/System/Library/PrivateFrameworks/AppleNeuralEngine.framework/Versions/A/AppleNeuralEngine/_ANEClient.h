@class _ANEVirtualClient, NSArray, NSMutableDictionary, _ANEDaemonConnection;

@interface _ANEClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _ANEDaemonConnection *_fastConn;
}

@property (readonly, nonatomic) _ANEDaemonConnection *conn;
@property (readonly, nonatomic) BOOL allowRestrictedAccess;
@property (readonly, nonatomic) _ANEDaemonConnection *fastConn;
@property (readonly, nonatomic) NSArray *priorityQ;
@property (readonly, nonatomic) _ANEVirtualClient *virtualClient;
@property (readonly, nonatomic) NSMutableDictionary *connectionsUsedForLoadingModels;
@property (readonly, nonatomic) NSMutableDictionary *connections;
@property (readonly, nonatomic) BOOL isRootDaemon;

+ (id)new;
+ (void)initialize;
+ (id)sharedConnection;
+ (id)sharedPrivateConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)compileModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)compiledModelExistsFor:(id)a0;
- (BOOL)evaluateRealTimeWithModel:(id)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)evaluateWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)loadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)loadModelNewInstance:(id)a0 options:(id)a1 modelInstParams:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)loadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)mapIOSurfacesWithModel:(id)a0 request:(id)a1 cacheInference:(BOOL)a2 error:(id *)a3;
- (void)purgeCompiledModel:(id)a0;
- (BOOL)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)unloadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)unmapIOSurfacesWithModel:(id)a0 request:(id)a1;
- (BOOL)endRealTimeTask;
- (BOOL)isVirtualClient;
- (void)purgeCompiledModelMatchingHash:(id)a0;
- (BOOL)beginRealTimeTask;
- (BOOL)buffersReadyWithModel:(id)a0 inputBuffers:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)compiledModelExistsMatchingHash:(id)a0;
- (id)connectionForLoadingModel:(id)a0 options:(id)a1;
- (id)connectionUsedForLoadingModel:(id)a0;
- (BOOL)doBuffersReadyWithModel:(id)a0 inputBuffers:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doEnqueueSetsWithModel:(id)a0 outputSet:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doEvaluateDirectWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doLoadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)doLoadModelNewInstance:(id)a0 options:(id)a1 modelInstParams:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doPrepareChainingWithModel:(id)a0 options:(id)a1 chainingReq:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doUnloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)echo:(id)a0;
- (BOOL)enqueueSetsWithModel:(id)a0 outputSet:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (id)fastConnWithoutLock;
- (id)initWithRestrictedAccessAllowed:(BOOL)a0;
- (BOOL)isAnetoolRootDaemonConnection;
- (BOOL)prepareChainingWithModel:(id)a0 options:(id)a1 chainingReq:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (void)reportEvaluateFailure:(id)a0 failureReason:(unsigned int)a1 qIdx:(unsigned long long)a2;
- (BOOL)sessionHintWithModel:(id)a0 hint:(id)a1 options:(id)a2 report:(id)a3 error:(id *)a4;

@end
