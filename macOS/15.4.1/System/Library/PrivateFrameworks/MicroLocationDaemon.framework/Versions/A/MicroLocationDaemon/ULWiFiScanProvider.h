@class NSString, ULTimer, ULWiFiBridge, NSObject;
@protocol OS_dispatch_queue, ULWiFiScanProviderDelegate;

@interface ULWiFiScanProvider : NSObject <ULWiFiBridgeDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ULWiFiScanProviderDelegate> delegate;
@property (nonatomic) BOOL isScanInProgress;
@property (retain, nonatomic) ULTimer *timer;
@property (retain, nonatomic) ULTimer *internalTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) ULWiFiBridge *wiFiBridge;

+ (id)_filterGoodAPs:(id)a0;
+ (BOOL)_isGoodAp:(id)a0;
+ (struct WiFiRssi { struct WiFiRssi { void /* function */ **x0; double x1; int x2; float x3; unsigned long long x4; int x5; int x6; unsigned int x7[1]; } x0; unsigned int x1; })_protoWiFiRssiFromRawScanSingleAp:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 andQueue:(id)a1;
- (void)stopScan;
- (void)_createAndStartWifiBridge;
- (void)issueNextScanIterrationOrStopScan:(id)a0;
- (void)onAssociatedStateChange:(id)a0;
- (void)onInterfaceInvalidation;
- (void)onWifiScanResults:(id)a0 withError:(id)a1;
- (void)startScanTimerWithInterval:(double)a0;
- (void)startScanWithStrategyType:(id)a0 initialDelay:(double)a1;
- (void)stopScanTimer;

@end
