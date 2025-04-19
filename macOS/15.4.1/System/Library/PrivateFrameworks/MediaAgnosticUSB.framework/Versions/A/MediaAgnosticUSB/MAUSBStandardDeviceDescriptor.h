@interface MAUSBStandardDeviceDescriptor : MAUSBDescriptor

@property (readonly) unsigned short bcdUSB;
@property (readonly) unsigned char bDeviceClass;
@property (readonly) unsigned char bDeviceSubClass;
@property (readonly) unsigned char bDeviceProtocol;
@property (readonly) unsigned char bMaxPacketSize0;
@property (readonly) unsigned short idVendor;
@property (readonly) unsigned short idProduct;
@property (readonly) unsigned short bcdDevice;
@property (readonly) unsigned char iManufacturer;
@property (readonly) unsigned char iProduct;
@property (readonly) unsigned char iSerialNumber;
@property (readonly) unsigned char bNumConfigurations;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithUSB:(unsigned short)a0 deviceClass:(unsigned char)a1 deviceSubClass:(unsigned char)a2 deviceProtocol:(unsigned char)a3 maxPacketSize0:(unsigned char)a4 vendor:(unsigned short)a5 product:(unsigned short)a6 device:(unsigned short)a7 manufacturerIndex:(unsigned char)a8 productIndex:(unsigned char)a9 serialNumberIndex:(unsigned char)a10 numConfigurations:(unsigned char)a11;

@end
