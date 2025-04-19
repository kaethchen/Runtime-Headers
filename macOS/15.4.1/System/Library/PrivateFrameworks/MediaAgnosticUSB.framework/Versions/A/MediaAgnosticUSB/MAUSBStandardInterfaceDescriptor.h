@interface MAUSBStandardInterfaceDescriptor : MAUSBDescriptor

@property (readonly) unsigned char bInterfaceNumber;
@property (readonly) unsigned char bAlternateSetting;
@property (readonly) unsigned char bNumEndpoints;
@property (readonly) unsigned char bInterfaceClass;
@property (readonly) unsigned char bInterfaceSubClass;
@property (readonly) unsigned char bInterfaceProtocol;
@property (readonly) unsigned char iInterface;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithInterfaceNumber:(unsigned char)a0 alternateSetting:(unsigned char)a1 numEndpoints:(unsigned char)a2 class:(unsigned char)a3 subClass:(unsigned char)a4 protocol:(unsigned char)a5 index:(unsigned char)a6;

@end
