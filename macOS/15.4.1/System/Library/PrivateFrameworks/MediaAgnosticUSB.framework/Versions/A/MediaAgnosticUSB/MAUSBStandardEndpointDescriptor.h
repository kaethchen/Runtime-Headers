@interface MAUSBStandardEndpointDescriptor : MAUSBDescriptor

@property (readonly) unsigned char bEndpointAddress;
@property (readonly) unsigned char bmAttributes;
@property (readonly) unsigned short wMaxPacketSize;
@property (readonly) unsigned char bInterval;
@property (readonly) BOOL inEndpoint;
@property (readonly) unsigned char transferType;
@property (readonly) unsigned char number;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithEndpointAddress:(unsigned char)a0 attributes:(unsigned char)a1 maxPacketSize:(unsigned short)a2 interval:(unsigned char)a3;

@end
