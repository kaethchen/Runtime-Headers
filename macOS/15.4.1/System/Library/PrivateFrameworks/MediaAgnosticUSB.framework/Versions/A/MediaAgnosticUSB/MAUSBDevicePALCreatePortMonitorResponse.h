@interface MAUSBDevicePALCreatePortMonitorResponse : MAUSBDevicePALAppleResponse

@property (readonly) unsigned char initialPortStatus;

- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithAppleStatus:(unsigned short)a0 initialPortStatus:(unsigned char)a1;

@end
