@interface _CDNetworkContext : NSObject

+ (long long)cellUploadCost:(id)a0;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (id)keyPathForWiredConnectionStatus;
+ (long long)cellDownloadCost:(id)a0;
+ (long long)cellInterfaceClass:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (id)connectionQualityKey;
+ (id)downloadPowerCostKey;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (id)interfaceClassKey;
+ (id)interfaceUpKey;
+ (id)keyPathForCellConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)loiKey;
+ (BOOL)networkingAvailable:(id)a0;
+ (id)predictionKey;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (id)uploadPowerCostKey;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)wifiQuality:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (long long)wiredQuality:(id)a0;

@end
