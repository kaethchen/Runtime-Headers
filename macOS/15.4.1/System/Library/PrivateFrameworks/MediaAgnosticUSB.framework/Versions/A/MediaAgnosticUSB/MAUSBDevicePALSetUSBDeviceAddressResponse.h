@interface MAUSBDevicePALSetUSBDeviceAddressResponse : MAUSBDevicePALResponse

@property (readonly) unsigned char usbDeviceAddress;

- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStatus:(unsigned char)a0 usbDeviceAddress:(unsigned char)a1;

@end
