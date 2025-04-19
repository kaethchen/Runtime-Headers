@class NSObject;
@protocol OS_dispatch_queue;

@interface APDBrowserBluetoothHelper : NSObject {
    BOOL _isBluetoothPoweredOn;
}

@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) void /* function */ *eventHandlerFunc;
@property (nonatomic) struct OpaqueAPDBluetoothHelper { } *helperRef;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) BOOL isInvalidated;
@property (nonatomic) BOOL bluetoothPowerChangedListeningStarted;

- (void)dealloc;
- (id)init;
- (int)invalidate;
- (id)getEventString:(unsigned int)a0;
- (int)dispatchEvent:(unsigned int)a0 withEventInfo:(id)a1;
- (int)ensureBluetoothPowerChangedListenerStopped;
- (int)ensureBluetoothPowerEventMonitorStarted;
- (int)getBluetoothPowerOn:(BOOL *)a0;
- (void)handleBluetoothChangedNotification:(id)a0;
- (void)handleBluetoothChangedNotificationInternal:(id)a0;
- (int)queryBluetoothPower:(BOOL *)a0;
- (int)setBluetoothPower:(BOOL)a0;
- (int)setEventHandler:(void /* function */ *)a0 context:(void *)a1 helperRef:(struct OpaqueAPDBluetoothHelper { } *)a2;
- (int)setPowered:(BOOL)a0;
- (int)startListeningToEvent:(unsigned int)a0;
- (int)stopListeningToEvent:(unsigned int)a0;

@end
