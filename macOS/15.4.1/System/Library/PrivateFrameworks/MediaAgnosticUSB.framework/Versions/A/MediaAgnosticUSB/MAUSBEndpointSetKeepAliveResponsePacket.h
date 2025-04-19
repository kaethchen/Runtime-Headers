@interface MAUSBEndpointSetKeepAliveResponsePacket : MAUSBManagementPacket

@property (readonly) unsigned short oldDuration;
@property (readonly) unsigned char startRequestID;
@property (readonly) unsigned short streamID;
@property (readonly) unsigned short endpointHandle;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 dialogToken:(unsigned short)a4 oldDuration:(unsigned short)a5 startRequestID:(unsigned char)a6 streamID:(unsigned short)a7 endpointHandle:(unsigned short)a8;

@end
