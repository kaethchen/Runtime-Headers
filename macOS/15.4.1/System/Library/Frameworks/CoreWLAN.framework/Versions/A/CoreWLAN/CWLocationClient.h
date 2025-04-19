@class CWWiFiClient, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CWLocationClient : NSObject {
    CWWiFiClient *_wifiClient;
    NSString *_interfaceName;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    double _interval;
    double _channelInterval;
    BOOL _isScanningDisabled;
    BOOL _isScanningTemporarilyDisabled;
    BOOL _acquiredCurrentLocation;
    NSMutableDictionary *_channelHistoryMap;
    NSMutableArray *_channelList;
    unsigned long long _prevChannelIndex;
    unsigned long long _channelIndex;
    id /* block */ _scanResultsHandler;
}

+ (id)sharedLocationClient;

- (void)dealloc;
- (id)init;
- (void)setInterval:(double)a0;
- (void)__startScanning;
- (void)__acquireCurrentLocationWithScanResults:(id)a0;
- (void)__performScan;
- (void)__restartScanning;
- (void)__stopScanning;
- (id)__supportedLocationWiFiChannelList;
- (void)__updateChannelList;
- (void)autoJoinDidCompleteForWiFiInterfaceWithName:(id)a0;
- (void)autoJoinDidStartForWiFiInterfaceWithName:(id)a0;
- (void)countryCodeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)scanCacheUpdatedForWiFiInterfaceWithName:(id)a0;
- (void)setChannelInterval:(double)a0;
- (void)setScanResultsHandler:(id /* block */)a0;
- (void)startScanning;
- (void)stopScanning;

@end
