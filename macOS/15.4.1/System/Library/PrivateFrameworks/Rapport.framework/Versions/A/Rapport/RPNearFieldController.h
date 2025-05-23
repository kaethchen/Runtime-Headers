@class NSString, NSXPCConnection, NSObject, RPNearFieldContext;
@protocol RPNearFieldTransaction, OS_dispatch_queue, RPNearFieldControllerDelegate;

@interface RPNearFieldController : NSObject <RPNearFieldXPCClientInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _didStart;
}

@property (nonatomic) long long currentPreferredPollingType;
@property (retain, nonatomic) RPNearFieldContext *currentContext;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<RPNearFieldTransaction> currentTransaction;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, weak, nonatomic) id<RPNearFieldControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *currentApplicationLabel;

- (void).cxx_destruct;
- (void)invalidate;
- (void)stop;
- (void)_invalidated;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxy;
- (id)initWithDispatchQueue:(id)a0 delegate:(id)a1;
- (id)_exportedInterface;
- (id)_remoteObjectInterface;
- (void)_startPolling;
- (void)didBeginTransaction:(id)a0;
- (void)didDetectDeviceNearbyWithInitiatorRole:(BOOL)a0;
- (void)didInterruptTransaction:(id)a0 withError:(id)a1;
- (void)didUpdateTransaction:(id)a0;
- (void)invalidateTransaction:(id)a0;
- (void)invalidateTransaction:(id)a0 context:(id)a1;
- (void)startPolling:(long long)a0 context:(id)a1;
- (void)startPolling:(long long)a0 forApplicationLabel:(id)a1;

@end
