@class NSString;
@protocol MTLDevice;

@interface MTLToolsHeap : MTLToolsObject <MTLHeapSPI>

@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long protectionOptions;
@property (readonly, nonatomic) unsigned long long memoryPoolId;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) long long type;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_newToolsAccelerationStructure:(id)a0;
- (id)_newToolsBuffer:(id)a0;
- (id)_newToolsTexture:(id)a0;
- (BOOL)detachBacking;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (void)notifyResourceReleasing:(id)a0;
- (BOOL)replaceBackingWithRanges:(id)a0 readOnly:(BOOL)a1;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;

@end
