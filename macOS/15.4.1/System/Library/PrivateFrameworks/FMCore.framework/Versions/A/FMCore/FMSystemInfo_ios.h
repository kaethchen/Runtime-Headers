@interface FMSystemInfo_ios : FMSystemInfo

- (id)productName;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)productType;
- (id)osVersion;
- (BOOL)hasSEP;
- (id)wifiMacAddress;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)ecid;
- (id)deviceModelName;
- (BOOL)isDeviceSecured;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)btMacAddress;
- (id)chipId;
- (id)imei;
- (id)meid;

@end
