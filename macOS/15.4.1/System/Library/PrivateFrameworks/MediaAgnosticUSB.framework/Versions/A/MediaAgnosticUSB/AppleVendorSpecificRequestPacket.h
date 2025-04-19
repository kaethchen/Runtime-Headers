@interface AppleVendorSpecificRequestPacket : MAUSBVendorSpecificRequestPacket

@property (readonly) unsigned short applePacketType;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 applePacketType:(unsigned short)a3;
- (BOOL)parseAppleVendorSpecificRequestCommonFields:(id)a0;

@end
