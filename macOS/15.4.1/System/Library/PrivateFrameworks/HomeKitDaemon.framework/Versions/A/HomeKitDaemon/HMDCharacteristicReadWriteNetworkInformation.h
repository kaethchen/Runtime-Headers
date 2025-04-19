@class NSString, NSData, HMFWiFiManager;

@interface HMDCharacteristicReadWriteNetworkInformation : NSObject

@property (copy) NSString *wifiSSID;
@property (copy) NSString *wifiBSSID;
@property (copy) NSData *ipv4Signature;
@property (copy) NSData *ipv6Signature;
@property unsigned long long wifiConnectionState;
@property long long bluetoothState;
@property unsigned long long ethernetConnectionState;
@property unsigned long long cellularDataConnectionState;
@property BOOL isConnectedToInternet;
@property BOOL isInfraRelayInterfaceActive;
@property double timeIntervalNetworkInformationCache;
@property (retain) HMFWiFiManager *wifiManager;

- (void).cxx_destruct;
- (id)initWithWifiManager:(id)a0;
- (void)_refreshBluetoothInformation;
- (void)_refreshWifiInformation;
- (void)refreshNetworkInformation;

@end
