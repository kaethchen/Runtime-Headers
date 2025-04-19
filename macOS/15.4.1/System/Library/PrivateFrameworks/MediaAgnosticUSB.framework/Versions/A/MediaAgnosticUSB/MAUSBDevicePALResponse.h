@interface MAUSBDevicePALResponse : MAUSBObject

@property (readonly) unsigned char status;

- (id)initWithStatus:(unsigned char)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
