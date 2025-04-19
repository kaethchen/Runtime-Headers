@interface MAUSBGetPortBandwidthRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned char speed;
@property (readonly) unsigned char laneSpeedExponent;
@property (readonly) unsigned char laneCount;
@property (readonly) unsigned char linkProtocol;
@property (readonly) unsigned short laneSpeedMantissa;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 speed:(unsigned char)a4 laneSpeedExponent:(unsigned char)a5 laneCount:(unsigned char)a6 linkProtocol:(unsigned char)a7 laneSpeedMantissa:(unsigned short)a8;

@end
