@interface CUFindMyLocateMeDeviceMonitor : NSObject {
    void /* unknown type, empty encoding */ _dispatchQueue;
    void /* unknown type, empty encoding */ _monitorTask;
    void /* unknown type, empty encoding */ meDeviceUpdatedHandler;
    void /* unknown type, empty encoding */ _firstUnlockStarted;
    void /* unknown type, empty encoding */ _systemMonitor;
}

@property (class, nonatomic, readonly) BOOL supported;

@property (nonatomic, copy) id /* block */ meDeviceUpdatedHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithDispatchQueue:(id)a0;

@end
