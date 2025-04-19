@interface MAUSBDeviceHandleResponsePacket : MAUSBManagementPacket

@property (readonly) unsigned short usbDeviceHandle;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 statusCode:(unsigned char)a2 dialogToken:(unsigned short)a3 usbDeviceHandle:(unsigned short)a4;

@end
