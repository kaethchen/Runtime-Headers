@interface MAUSBAppleStartPortMonitoringResponsePacket : AppleVendorSpecificResponsePacket

@property (readonly) unsigned char portStatus;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 dialogToken:(unsigned short)a2 appleStatus:(unsigned short)a3 portStatus:(unsigned char)a4;
- (BOOL)parseStartPortMonitoringResponseFields:(id)a0;

@end
