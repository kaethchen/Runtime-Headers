@class CTDataConnectionStatus, NSString, CTMobileEquipmentInfo, CTDataStatus, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiTelephonyClient : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCellularUsagePolicyDelegate, CoreTelephonyClientCarrierBundleDelegate>

@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) CoreTelephonyClient *coreTelephonyClient;
@property (retain) CTMobileEquipmentInfo *mobileEquipmentInfo;
@property (retain) CTDataStatus *dataStatus;
@property (retain) CTDataConnectionStatus *connectionStatus;
@property (retain) NSString *radioAccessTechnology;
@property (retain) NSString *registrationStatus;
@property (retain) NSString *carrierName;
@property (getter=isCellular5GSupported) BOOL cellular5GSupported;
@property (getter=isCellularFallbackEnabled) BOOL cellularFallbackEnabled;
@property (getter=isIMSRegistrationActiveAndOnWiFi) BOOL imsRegistrationActiveAndOnWiFi;
@property (copy) id /* block */ cellularFallbackStatusChangedHandler;
@property (copy) id /* block */ imsRegistrationStatusChangedHandler;
@property (copy) id /* block */ cellularDataStatusChangedHandler;
@property (readonly) BOOL isCellularFallbackEnabled;
@property (readonly) BOOL isIMSRegistrationActiveAndOnWiFi;
@property (readonly) BOOL isCellular5GSupported;
@property (readonly) BOOL isCellular5GActive;
@property (readonly) BOOL isCellularLTEActive;
@property (readonly) BOOL isCellularDataInRoaming;
@property (readonly, copy) NSString *cellularICCID;
@property (readonly, copy) NSString *cellularInterfaceName;
@property (readonly, copy) NSString *cellularCarrierName;
@property (readonly, copy) NSString *cellularDataIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)carrierBundleChange:(id)a0;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (void)imsRegistrationChanged:(id)a0 info:(id)a1;
- (void)reliableNetworkFallbackChanged:(BOOL)a0 userEnabled:(BOOL)a1;
- (void)_updateCellularMEIAndDataStatus;
- (id)_dataIndicatorToString:(int)a0;
- (id)_getCurrentDataServiceContext;

@end
