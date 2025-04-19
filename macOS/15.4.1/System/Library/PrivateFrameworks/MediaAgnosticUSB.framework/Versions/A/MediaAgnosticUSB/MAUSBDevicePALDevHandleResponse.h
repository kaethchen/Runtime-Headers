@interface MAUSBDevicePALDevHandleResponse : MAUSBDevicePALResponse

@property (readonly) unsigned short handle;
@property (readonly) unsigned char busNumber;
@property (readonly) unsigned char usbDeviceAddress;

- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStatus:(unsigned char)a0 handle:(unsigned short)a1 busNumber:(unsigned char)a2 usbDeviceAddress:(unsigned char)a3;

@end
