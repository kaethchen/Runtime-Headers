@class IOBluetoothUserNotification, NSArray, NSSet, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition, IOBluetoothHostController;

@interface PLBluetoothAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;
@property (retain) IOBluetoothHostController *ioBTController;
@property (retain) NSArray *cachedPairedDevices;
@property (retain) NSSet *cachedPairedDevicesAddresses;
@property unsigned char scanState;
@property (retain) IOBluetoothUserNotification *btConnectionNotification;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)getScanCoreKeys;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (id)entryEventBackwardDefinitionThreadRadioPowerProfileStats;
+ (id)entryEventBackwardWakeupVSE;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)getBluetooth5GKeys;
+ (BOOL)shouldLogEnhancedStats;
+ (BOOL)shouldLogMarconi;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)log;
- (BOOL)isDiscoverable;
- (void)initOperatorDependancies;
- (BOOL)isConnectable;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)btDeviceConnectionNotification:(id)a0 forDevice:(id)a1;
- (id)getCurrentPairedBTDevices;
- (void)logConnectedDevicesOSX:(id)a0;
- (void)logDeviceStateOSX:(id)a0;
- (void)logEventBackwardCBDiscovery:(id)a0;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logEventForwardDeviceState;
- (void)logEventForwardPairedDevices;
- (void)logEventIntervalConnectedDevices;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logPairedDevicesOSX:(id)a0;
- (void)logwithBTOnCheck;
- (void)modelBluetoothOffPower;
- (void)modelBluetoothPower:(id)a0;
- (BOOL)modulePowered;
- (void)receivedBTStatusUpdateOSX:(id)a0;
- (void)refreshBTPairedDevices;
- (void)refreshBTPairedDevicesWithNewDevices:(id)a0;

@end
