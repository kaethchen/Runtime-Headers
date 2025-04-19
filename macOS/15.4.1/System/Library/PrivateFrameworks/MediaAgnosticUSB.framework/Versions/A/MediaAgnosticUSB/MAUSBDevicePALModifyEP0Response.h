@class MAUSBEndpointHandle;

@interface MAUSBDevicePALModifyEP0Response : MAUSBDevicePALResponse

@property (readonly) MAUSBEndpointHandle *endpointHandle;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStatus:(unsigned char)a0 endpointHandle:(id)a1;

@end
