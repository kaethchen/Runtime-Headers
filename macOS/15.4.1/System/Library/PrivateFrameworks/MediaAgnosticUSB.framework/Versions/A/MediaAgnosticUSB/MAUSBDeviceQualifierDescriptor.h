@interface MAUSBDeviceQualifierDescriptor : MAUSBDescriptor

@property (readonly) unsigned short bcdUSB;
@property (readonly) unsigned char bDeviceClass;
@property (readonly) unsigned char bDeviceSubClass;
@property (readonly) unsigned char bDeviceProtocol;
@property (readonly) unsigned char bMaxPacketSize0;
@property (readonly) unsigned char bNumConfigurations;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithUSB:(unsigned short)a0 deviceClass:(unsigned char)a1 deviceSubClass:(unsigned char)a2 deviceProtocol:(unsigned char)a3 maxPacketSize:(unsigned char)a4 numConfigurations:(unsigned char)a5;

@end
