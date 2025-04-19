@class NSString, CBL2CAPChannel, NSObject, IOBluetoothDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable> {
    id /* block */ _activateCompletion;
    BOOL _connectionObserving;
    IOBluetoothDevice *_btDevice;
    BOOL _btConnected;
    char _btDeviceAddrStr[32];
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) CBL2CAPChannel *l2capChannel;
@property (copy, nonatomic) id /* block */ serverInvalidationHandler;
@property (nonatomic) unsigned int connectionFlags;
@property (copy, nonatomic) NSString *destinationPeer;
@property (copy, nonatomic) NSString *destinationService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int requiredServices;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (BOOL)_startConnectingAndReturnError:(id *)a0;
- (void)_connectionCompleteNotification:(id)a0;
- (void)_externalInvokeBlock:(id /* block */)a0;
- (id)_internalDispatchQueue;
- (void)_reportError:(id)a0;
- (void)_run;
- (BOOL)_runConnectStart;
- (void)_timeoutFired;
- (BOOL)activateDirectAndReturnError:(id *)a0;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (void)readWithRequest:(id)a0;
- (void)writeWithRequest:(id)a0;

@end
