@class FBWorkspaceConnectionsState, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FBWorkspaceConnectionsStateStore : NSObject {
    NSString *_path1;
    NSString *_path2;
    NSObject<OS_dispatch_queue> *_queue;
    FBWorkspaceConnectionsState *_queue_state;
    long long _queue_lastBuffer;
    long long _queue_nextWriteFailure;
    BOOL _queue_writeFailedOnce;
}

@property (readonly, nonatomic) long long _lastUsedBuffer;
@property (copy, nonatomic) FBWorkspaceConnectionsState *state;

+ (void)_unlinkAllForIdentifier:(id)a0;
+ (id)_loadStateFromPath:(id)a0 outGeneration:(out BOOL *)a1 outExisted:(out BOOL *)a2;
+ (BOOL)_storeState:(id)a0 toPath:(id)a1 withGeneration:(BOOL)a2 injectedFailure:(inout long long *)a3;
+ (void)_unlinkShmPath:(id)a0 graceful:(BOOL)a1;
+ (BOOL)hasSandboxAccessForIdentifier:(id)a0;
+ (id)identifierForName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0;
- (void)_setFailureModeForNextWrite:(long long)a0;

@end
