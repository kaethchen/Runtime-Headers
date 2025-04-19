@class NSString, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimHeap : _MTLHeap <MTLHeapSPI, MTLSerializerHeap> {
    MTLSimDevice *_device;
    unsigned int _heapRef;
    unsigned long long _purgeableState;
}

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
@property (readonly) unsigned int heapRef;
@property (readonly) unsigned int serializerResourceRef;

- (void)dealloc;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getSizeInfo;
- (id)initWithDescriptor:(id)a0 device:(id)a1 heapRef:(unsigned int)a2;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2 useOffset:(BOOL)a3;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 useOffset:(BOOL)a2;

@end
