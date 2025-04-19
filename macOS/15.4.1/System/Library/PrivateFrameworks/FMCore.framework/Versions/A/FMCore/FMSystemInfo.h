@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)productName;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)productType;
- (BOOL)isInternalBuild;
- (id)osVersion;
- (BOOL)hasSEP;
- (id)wifiMacAddress;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)ecid;
- (id)deviceModelName;
- (BOOL)isDeviceSecured;
- (id)btMacAddress;
- (id)chipId;
- (id)imei;
- (id)meid;
- (id)ownerAccount;

@end
