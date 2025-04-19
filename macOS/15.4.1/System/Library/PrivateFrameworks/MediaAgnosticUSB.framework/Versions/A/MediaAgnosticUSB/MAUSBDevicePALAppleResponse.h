@interface MAUSBDevicePALAppleResponse : MAUSBObject

@property (readonly) unsigned short appleStatus;

- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithAppleStatus:(unsigned short)a0;

@end
