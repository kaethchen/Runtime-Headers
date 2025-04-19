@interface MAUSBStreamIDIntervalBlock : MAUSBStructure

@property (readonly) unsigned short firstStreamID;
@property (readonly) unsigned short lastStreamID;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithFirstStreamID:(unsigned short)a0 lastStreamID:(unsigned short)a1;

@end
