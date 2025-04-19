@class NSMutableDictionary, NSString, NSMutableSet, RPCompanionLinkClient, NSObject, NSRegularExpression;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CWFDeviceDiscoveryManager : NSObject

@property (nonatomic) unsigned long long setupReason;
@property (retain, nonatomic) RPCompanionLinkClient *rapportClient;
@property (nonatomic) unsigned long long rapportClientActivationFailCount;
@property (retain, nonatomic) NSMutableSet *activeDevices;
@property (retain, nonatomic) NSMutableDictionary *retryDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *wifiInfoRetryRequestTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *rapportTeardownTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rapportQueue;
@property (copy, nonatomic) NSString *thisDeviceMACAddress;
@property (retain, nonatomic) NSMutableSet *delegates;
@property (retain, nonatomic) NSRegularExpression *rapportErrorRegex;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidateRapportTeardownTimer;
- (void)_fetchAndUpdateActiveDevicesInfo;
- (void)_fetchWiFiInfoForDevice:(id)a0 rapportDevice:(id)a1;
- (void)_fetchWiFiInfoForRapportDevice:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateWiFiInfoRetryRequestTimer;
- (BOOL)_isRapportTeardownTimerValid;
- (BOOL)_isSupportedModel:(id)a0;
- (BOOL)_isWiFiInfoRequestTimerValid;
- (void)_registerExtractWiFiInfo;
- (void)_resetRapportClientWithInvalidation:(BOOL)a0;
- (void)_sendRapportMessageToDevice:(id)a0 requestID:(id)a1 request:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)_sendRapportMessageToDevice:(id)a0 withRequestID:(id)a1 request:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)_setupRapportClientWithReason:(unsigned long long)a0;
- (id)_wifiInfo;
- (id)fetchActiveDevices;
- (void)fetchWiFiInfoForDevice:(id)a0;
- (void)registerDelegate:(id)a0;
- (void)startDiscoveringDevicesIfNeeded:(id)a0 withReason:(unsigned long long)a1;
- (void)unregisterDelegate:(id)a0;

@end
