@class NSDictionary;

@interface AppleBluetoothHIDDevice : BluetoothHIDDevice {
    NSDictionary *_featureDict;
}

- (void).cxx_destruct;
- (int)disconnect;
- (int)setDeviceName:(id)a0;
- (void)serviceInterestOfType:(unsigned int)a0 argument:(void *)a1;
- (BOOL)batteryDangerouslyLow;
- (BOOL)batteryLow;
- (float)batteryPercent;
- (BOOL)connectToHost:(const struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0 linkKey:(const struct BluetoothKey { unsigned char x0[16]; } *)a1;
- (int)connectionCounts:(struct ConnectionCount { int x0; int x1; } *)a0;
- (int)deleteAllLinkKeys;
- (id)deviceNameFromHardware;
- (BOOL)factoryDefault;
- (BOOL)fullFactoryDefault;
- (long long)getFeatureReport:(id)a0;
- (float)getFloatFeatureReport:(id)a0;
- (int)getMaxDeviceNameLength;
- (BOOL)handoffAndRemoveHost:(BOOL)a0 pageType:(unsigned char)a1 deviceAddress:(const struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a2 linkKey:(const struct BluetoothKey { unsigned char x0[16]; } *)a3;
- (id)initWithHIDDevice:(unsigned int)a0;
- (BOOL)recantConnection;
- (void)remoteNameRequestComplete:(id)a0 status:(int)a1;
- (BOOL)removeCurrentHost;
- (BOOL)report:(id)a0 info:(struct ReportInfo { int x0; int x1; long long x2; long long x3; } *)a1;
- (BOOL)report:(id)a0 reportID:(int *)a1 min:(int *)a2 max:(int *)a3;
- (int)reportIDForReportKey:(id)a0;
- (BOOL)sendCommandFeatureReport:(id)a0;
- (BOOL)sendConnectionIntervalUpdate:(BOOL)a0 intervalSlots:(unsigned char)a1 transmitAttempts:(unsigned char)a2 asymmetricMultiplier:(unsigned char)a3;
- (BOOL)sendSCODevicePaired;
- (BOOL)sendSCODeviceUnpaired;
- (BOOL)sendSCOLinkActive;
- (BOOL)sendSCOLinkInactive;
- (BOOL)setFeatureReport:(id)a0 value:(long long)a1;
- (BOOL)setFeatureWithReportID:(int)a0 value:(unsigned char)a1;
- (BOOL)setFloatFeatureReport:(id)a0 value:(float)a1;
- (BOOL)setLLREnabled:(BOOL)a0;
- (BOOL)setUserMode:(int)a0;
- (BOOL)suspendDevice:(BOOL)a0;
- (int)userMode;

@end
