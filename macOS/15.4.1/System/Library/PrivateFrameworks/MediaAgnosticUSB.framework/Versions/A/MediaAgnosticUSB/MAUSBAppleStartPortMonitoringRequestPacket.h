@class MAUSBRouteString;

@interface MAUSBAppleStartPortMonitoringRequestPacket : AppleVendorSpecificRequestPacket

@property (readonly) MAUSBRouteString *routeString;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 routeString:(id)a2;
- (BOOL)parseStartPortMonitoringRequestFields:(id)a0;

@end
