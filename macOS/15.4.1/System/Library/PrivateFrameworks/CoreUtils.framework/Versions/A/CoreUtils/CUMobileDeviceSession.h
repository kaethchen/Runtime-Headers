@class CUMobileDevice, CURunLoopThread, NSObject;
@protocol OS_dispatch_queue;

@interface CUMobileDeviceSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
    void /* function */ *_mdTryPINCallback;
    struct _AMDevice { } *_mdTryPINDevice;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) CUMobileDevice *peerDevice;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidated;
- (void)_pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (BOOL)_enableWirelessSupport:(id)a0 error:(id *)a1;
- (void)_pairSetupTryPIN:(id)a0;
- (BOOL)_pairSetupTrySupervisedWithAMDevice:(struct _AMDevice { } *)a0;
- (BOOL)_pairSetupTrySupervisedWithAMDevice:(struct _AMDevice { } *)a0 identityReferenceData:(id)a1;
- (void)_pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_unpairWithCompletion:(id /* block */)a0;
- (id)_waitForPairedCounterpartDevice:(id)a0 error:(id *)a1;
- (void)pairSetupTryPIN:(id)a0;
- (void)pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)unpairWithCompletion:(id /* block */)a0;

@end
