@class NSString;

@interface ULWiFiScanClientAdapter : NSObject <ULWiFiScanProviderDelegate>

@property (copy, nonatomic) id /* block */ didStopWifiRssiScanningBlock;
@property (copy, nonatomic) id /* block */ didStopWifiScanTimerBlock;
@property (copy, nonatomic) id /* block */ didUpdateWifiAPsBlock;
@property (copy, nonatomic) id /* block */ didReceiveWifiScanErrorBlock;
@property (copy, nonatomic) id /* block */ didReceiveWifiScanErrorBusyBlock;
@property (copy, nonatomic) id /* block */ didUpdateWiFiAssociatedStateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveWifiScanError;
- (void)didReceiveWifiScanErrorBusy;
- (void)didStopWifiRssiScanning;
- (void)didStopWifiScanTimer;
- (void)didUpdateWiFiAssociatedState:(id)a0;
- (void)didUpdateWifiAPs:(void *)a0 withDate:(id)a1;

@end
