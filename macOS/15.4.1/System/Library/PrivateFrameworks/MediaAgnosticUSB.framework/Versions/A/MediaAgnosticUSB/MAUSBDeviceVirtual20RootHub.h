@class NSMutableDictionary;

@interface MAUSBDeviceVirtual20RootHub : MAUSBDeviceVirtual20Hub <MAUSBDevicePortMonitorDelegate> {
    NSMutableDictionary *_portMonitors;
    NSMutableDictionary *_virtualPALs;
}

- (void).cxx_destruct;
- (BOOL)configureMonitoringForPortNumber:(unsigned char)a0 devicePAL:(id)a1;
- (BOOL)configureMonitoringForPortNumber:(unsigned char)a0 locationID:(unsigned int)a1;
- (BOOL)configurePortNumber:(unsigned char)a0 forLocationID:(unsigned int)a1;
- (BOOL)configurePortNumber:(unsigned char)a0 forLocationID:(unsigned int)a1 internal:(BOOL)a2;
- (BOOL)configurePortNumber:(unsigned char)a0 forVirtualDevice:(id)a1;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPortCount:(unsigned char)a0 queue:(id)a1;
- (void)portStatusChangedForRouteString:(id)a0 portStatus:(unsigned char)a1;

@end
