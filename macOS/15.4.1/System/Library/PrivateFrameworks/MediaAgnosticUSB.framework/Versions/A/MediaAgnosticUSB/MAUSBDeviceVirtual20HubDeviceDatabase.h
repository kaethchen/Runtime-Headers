@class NSMutableDictionary;

@interface MAUSBDeviceVirtual20HubDeviceDatabase : MAUSBObject {
    NSMutableDictionary *_devices;
}

- (id)init;
- (void).cxx_destruct;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)deviceForDeviceHandle:(unsigned short)a0;
- (id)deviceForRouteString:(id)a0;
- (id)getNextDeviceAddress;

@end
