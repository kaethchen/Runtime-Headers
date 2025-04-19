@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, BridgeOSSoftwareUpdateControllerDelegate;

@interface BridgeOSSoftwareUpdateController : NSObject {
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSObject<OS_xpc_object> *_updateProxy;
}

@property (copy, nonatomic) id /* block */ stateQueryCompletion;
@property (copy, nonatomic) id /* block */ macOSLogFetchCompletion;
@property (copy, nonatomic) id /* block */ bridgeOSLogFetchCompletion;
@property (weak, nonatomic) id<BridgeOSSoftwareUpdateControllerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_handleEvent:(id)a0;
- (void)queryUpdateState:(id)a0 completionHandler:(id /* block */)a1;
- (id)processOptions:(id)a0;
- (void)_cancelUpdateProxyConnection;
- (id)_updateProxy;
- (id)applyUpdate:(id)a0;
- (id)cancelPendingUpdate:(id)a0;
- (void)fetchBridgeOSLogs:(id)a0 sinceDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchMacOSLogs:(id)a0 sinceDate:(id)a1 completionHandler:(id /* block */)a2;
- (id)preflightUpdate:(id)a0;
- (id)prepareUpdate:(id)a0;
- (id)purgeUpdate:(id)a0;
- (id)releaseUpdateControl;
- (id)requestUpdateControl:(id)a0;
- (id)sendProxyMessageAsync:(const char *)a0 mergeDict:(id)a1 options:(id)a2 errorHandler:(id /* block */)a3;
- (id)sendProxyMessageAsync:(const char *)a0 options:(id)a1 errorHandler:(id /* block */)a2;
- (id)transferUpdateBrain:(id)a0 options:(id)a1;
- (id)transferUpdateBundle:(id)a0 options:(id)a1;

@end
