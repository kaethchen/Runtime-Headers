@class MAUSBRouteString;

@interface MAUSBApplePortEventNotificationPacket : AppleVendorSpecificRequestPacket

@property (readonly) MAUSBRouteString *routeString;
@property (readonly) unsigned char portStatus;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 routeString:(id)a2 portStatus:(unsigned char)a3;
- (BOOL)parsePortEventNotificationFields:(id)a0;

@end
