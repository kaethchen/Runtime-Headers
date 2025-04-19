@class NSMutableArray;
@protocol NSObject;

@interface VCPReactionAVCaptureDeviceObserver : NSObject {
    NSMutableArray *_captureDevices;
    unsigned long long _callerID;
    id<NSObject> _deviceConnectedObserver;
    id<NSObject> _deviceDisconnectedObserver;
    void /* function */ *_callback;
    void *_listener;
    BOOL _hasReactions;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (id)discoverCaptureDevices;
- (void)discoverCaptureDevicesAndSetupReactionObserver;
- (id)initWithCallerID:(unsigned long long)a0 listener:(void *)a1 callback:(void /* function */ *)a2;
- (void)setupReactionObserverForDevice:(id)a0 observe:(BOOL)a1;

@end
