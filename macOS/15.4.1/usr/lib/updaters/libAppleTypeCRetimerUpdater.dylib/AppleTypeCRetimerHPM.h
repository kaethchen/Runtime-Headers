@class NSObject;
@protocol OS_os_log;

@interface AppleTypeCRetimerHPM : NSObject {
    NSObject<OS_os_log> *_log;
    struct IOCFPlugInInterfaceStruct **_cfPlugInInterface;
    struct AppleHPMLibInterfaceStructV3 **_deviceInterface;
    unsigned char _routerID;
    unsigned int _address;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)forceRetimerPower:(BOOL)a0;
- (int)forceUpdateMode:(BOOL)a0;
- (BOOL)getAddressForDeviceService:(unsigned int)a0;
- (BOOL)initPluginInterfaceForService:(unsigned int)a0;
- (id)initWithHPMService:(unsigned int)a0 routerID:(unsigned char)a1 deviceService:(unsigned int)a2;

@end
