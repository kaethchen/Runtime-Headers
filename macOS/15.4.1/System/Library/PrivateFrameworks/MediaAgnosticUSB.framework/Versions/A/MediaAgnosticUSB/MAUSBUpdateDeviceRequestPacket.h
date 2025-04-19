@class MAUSBStandardDeviceDescriptor;

@interface MAUSBUpdateDeviceRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short maxExitLatency;
@property (readonly) BOOL hub;
@property (readonly) unsigned char numPorts;
@property (readonly) BOOL mtt;
@property (readonly) unsigned char ttt;
@property (readonly) BOOL integratedHubLatency;
@property (readonly) MAUSBStandardDeviceDescriptor *deviceDescriptor;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 maxExitLatency:(unsigned short)a4 hub:(BOOL)a5 numPorts:(unsigned char)a6 mtt:(BOOL)a7 ttt:(unsigned char)a8 integratedHubLatency:(BOOL)a9 deviceDescriptor:(id)a10;

@end
