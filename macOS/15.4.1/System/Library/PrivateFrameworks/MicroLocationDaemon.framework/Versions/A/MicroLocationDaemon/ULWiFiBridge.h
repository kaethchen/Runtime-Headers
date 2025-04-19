@class CWFInterface, NSObject, ULScanProviderMutableBool;
@protocol OS_dispatch_queue, ULWiFiBridgeDelegate;

@interface ULWiFiBridge : NSObject

@property (weak, nonatomic) id<ULWiFiBridgeDelegate> delegate;
@property (retain, nonatomic) CWFInterface *wifiInterface;
@property (nonatomic) BOOL isScanInProgress;
@property (retain, nonatomic) ULScanProviderMutableBool *doSendResultsToClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isWifiEnabled;

+ (unsigned long long)_ulBandFromCWFBand:(unsigned int)a0;
+ (unsigned int)_ulBandToCWFBand:(unsigned long long)a0;
+ (id)_ulRawScanResultsFromCWFScanResults:(id)a0 receivedDate:(id)a1;
+ (id)_ulSingleRawScanResultsFromCWFScanResult:(id)a0 receivedDate:(id)a1;
+ (id)_wiFiScanParametersFromStrategy:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stopScan;
- (void)_onBSSIDChanged:(id)a0;
- (void)_onInterfaceInvalidation;
- (void)startScanWithStrategy:(id)a0;

@end
