@class NSString;
@protocol MTLHeap, MTLDevice, MTLBuffer;

@interface MTLSimBuffer : MTLSimResource <MTLSerializerBuffer, MTLSerializerResource, MTLBufferSPI> {
    unsigned int _bufferRef;
    void *_content;
    void *_pointer;
    id /* block */ _deallocator;
    unsigned long long _length;
}

@property (readonly) unsigned int bufferRef;
@property (readonly) unsigned int serializerResourceRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long length;
@property (readonly) id<MTLBuffer> remoteStorageBuffer;
@property (readonly) unsigned long long gpuAddress;

- (void)dealloc;
- (unsigned long long)length;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct __IOSurface { } *)_aneIOSurface;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void *)contents;
- (id)formattedDescription:(unsigned long long)a0;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (id)newRemoteBufferViewForDevice:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)newTiledTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (void)removeAllDebugMarkers;
- (id)initWithDevice:(id)a0 bufferRef:(unsigned int)a1 content:(void *)a2 pointer:(void *)a3 length:(unsigned long long)a4 options:(unsigned long long)a5 heap:(id)a6 deallocator:(id /* block */)a7;

@end
