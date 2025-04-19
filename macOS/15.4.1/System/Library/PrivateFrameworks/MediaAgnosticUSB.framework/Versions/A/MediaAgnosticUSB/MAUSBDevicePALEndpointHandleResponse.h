@class NSArray;

@interface MAUSBDevicePALEndpointHandleResponse : MAUSBDevicePALResponse

@property (readonly) NSArray *descriptors;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStatus:(unsigned char)a0 descriptors:(id)a1;

@end
