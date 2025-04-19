@class NSArray;

@interface MAUSBDevicePALEndpointHandleErrorListResponse : MAUSBDevicePALResponse

@property (readonly) NSArray *endpointHandleErrorList;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithStatus:(unsigned char)a0 endpointHandleErrorList:(id)a1;

@end
