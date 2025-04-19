@class CWFDeviceDiscoveryManager, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CWFHotspotClientManager : NSObject <CWFDeviceDiscoveryManagerDelegate>

@property (retain, nonatomic) CWFDeviceDiscoveryManager *deviceDiscoveryManager;
@property (retain, nonatomic) NSMutableSet *activeHotspotClients;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hotspotQueue;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)hotspotDisabled;
- (void)clientAssociated:(id)a0 thisDeviceMACAddress:(id)a1;
- (void)clientAssociatedToHostPersonalHotspot:(id)a0;
- (void)clientDisassociated:(id)a0;
- (void)didDiscoverDevice:(id)a0;
- (void)didFetchWifiInfoForDevice:(id)a0;
- (void)didLoseDevice:(id)a0;

@end
