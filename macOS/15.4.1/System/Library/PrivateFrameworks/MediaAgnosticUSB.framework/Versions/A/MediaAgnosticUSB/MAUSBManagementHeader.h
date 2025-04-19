@interface MAUSBManagementHeader : MAUSBHeader

@property unsigned short dialogToken;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 retry:(BOOL)a1 packetSubtype:(unsigned char)a2 length:(unsigned short)a3 handle:(unsigned short)a4 deviceAddress:(unsigned char)a5 ssid:(unsigned char)a6 statusCode:(unsigned char)a7 dialogToken:(unsigned short)a8;

@end
