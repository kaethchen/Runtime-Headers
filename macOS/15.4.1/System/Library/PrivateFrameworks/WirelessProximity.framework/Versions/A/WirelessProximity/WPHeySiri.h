@protocol WPHeySiriProtocol;

@interface WPHeySiri : WPClient

@property (weak, nonatomic) id<WPHeySiriProtocol> delegate;
@property BOOL isScanning;

+ (long long)holdVouchers;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startScanning;
- (void)stopScanning;
- (void)stopAdvertising;
- (void)stateDidChange:(long long)a0;
- (void)startScanningAndAdvertisingWithData:(id)a0;
- (void)stopScanningAndAdvertising;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)advertisingStartedOfTypeAt:(unsigned char)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (id)clientAsString;
- (void)deviceDiscovered:(id)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)startAdvertisingWithData:(id)a0;
- (void)startScanningAndAdvertisingWithOptions:(id)a0;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;

@end
