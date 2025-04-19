@interface MAUSBEndpointDescriptor : MAUSBStructure

@property (readonly) unsigned short handle;
@property (readonly) BOOL direction;
@property (readonly) BOOL isoch;
@property (readonly) BOOL lManaged;
@property (readonly) BOOL valid;
@property (readonly) unsigned short creditConsumptionUnit;
@property (readonly) unsigned int bufferSize;
@property (readonly) unsigned short isochProgrammingDelay;
@property (readonly) unsigned short isochResponseDelay;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 direction:(BOOL)a1 isoch:(BOOL)a2 lManaged:(BOOL)a3 valid:(BOOL)a4 creditConsumptionUnit:(unsigned short)a5 bufferSize:(unsigned int)a6 isochProgrammingDelay:(unsigned short)a7 isochResponseDelay:(unsigned short)a8;

@end
