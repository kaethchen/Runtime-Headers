@class NSData, NSString, NSDate, SFBLEData, CBScalablePipeManager, CBCentralManager, NSObject, NSMutableArray, NSMutableData, CBScalablePipe, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEPipe : NSObject {
    BOOL _activateCalled;
    CBCentralManager *_btCentral;
    struct channel { } *_btChannel;
    BOOL _btConnected;
    BOOL _btConnecting;
    BOOL _btEndpointRegistering;
    BOOL _btEndpointRegistered;
    int _btFD;
    unsigned char _btReadHeader[4];
    NSMutableData *_btReadPayload;
    unsigned long long _btReadLen;
    unsigned long long _btReadOffset;
    struct channel_ring_desc { } *_btReadRing;
    NSObject<OS_dispatch_source> *_btReadSource;
    NSData *_btWriteData;
    SFBLEData *_btWriteItem;
    unsigned long long _btWriteLen;
    unsigned long long _btWriteOffset;
    const char *_btWritePtr;
    NSMutableArray *_btWriteQueue;
    struct channel_ring_desc { } *_btWriteRing;
    NSObject<OS_dispatch_source> *_btWriteSource;
    BOOL _btWriteSuspended;
    CBScalablePipe *_btPipe;
    long long _btPipePriority;
    CBScalablePipeManager *_btPipeManager;
    NSMutableDictionary *_frameHandlers;
    BOOL _invalidateCalled;
    NSDate *_lastDisconnectDate;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (readonly, nonatomic) long long connectionState;
@property (copy, nonatomic) id /* block */ connectionStateChangedHandler;
@property (copy, nonatomic) id /* block */ frameHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL manualConnect;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)addFrameHandlerForType:(unsigned char)a0 handler:(id /* block */)a1;
- (id)_defaultPairedDeviceBluetoothIdentifier;
- (void)_frameHandler:(unsigned char)a0 data:(id)a1;
- (void)_sendFrameType:(unsigned char)a0 payload:(id)a1 completion:(id /* block */)a2;
- (void)_setupIfNeeded;
- (id)getPeerUUID;
- (id)initWithPriority:(long long)a0;
- (void)removeFrameHandlerForType:(unsigned char)a0;
- (void)sendFrameType:(unsigned char)a0 payload:(id)a1 completion:(id /* block */)a2;
- (void)sendFrameTypeDirect:(unsigned char)a0 payload:(id)a1 completion:(id /* block */)a2;

@end
