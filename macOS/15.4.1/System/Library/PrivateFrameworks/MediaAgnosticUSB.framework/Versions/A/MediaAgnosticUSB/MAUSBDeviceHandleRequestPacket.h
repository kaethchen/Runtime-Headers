@class MAUSBRouteString;

@interface MAUSBDeviceHandleRequestPacket : MAUSBManagementPacket

@property (readonly) MAUSBRouteString *routeString;
@property (readonly) unsigned char speed;
@property (readonly) unsigned short hub;
@property (readonly) unsigned short parentHSHub;
@property (readonly) unsigned char parentHSHubPort;
@property (readonly) BOOL mtt;
@property (readonly) unsigned char laneSpeedExponent;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 dialogToken:(unsigned short)a2 routeString:(id)a3 speed:(unsigned char)a4 hub:(unsigned short)a5 parentHSHub:(unsigned short)a6 parentHSHubPort:(unsigned char)a7 mtt:(BOOL)a8 laneSpeedExponent:(unsigned char)a9;

@end
