@class NSString;
@protocol MTLCommandQueue, MTLDevice, MTLEvent, MTLComputePipelineState, PGDeserializer;

@interface PGBaseTask : NSObject <PGTask_Resource, PGTask_ResourceManager, PGTask_ObjectListManager> {
    struct shared_ptr<PGObjectListManager> { struct PGObjectListManager *__ptr_; struct __shared_weak_count *__cntrl_; } _objectListManager;
    struct unique_ptr<PGResourceManager, std::default_delete<PGResourceManager>> { struct __compressed_pair<PGResourceManager *, std::default_delete<PGResourceManager>> { struct PGResourceManager *__value_; } __ptr_; } _resourceManager;
    unsigned long long _length;
    struct shared_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } __mut_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate1_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate2_; unsigned int __state_; } __base_; } _mutex;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _objectDatabaseMutex;
    id<MTLCommandQueue> _pagingQueue;
    id<MTLEvent> _pagingEvent;
    unsigned long long _pagingCounter;
}

@property (readonly) BOOL ioSurfaceBuffersAllowed;
@property (readonly) BOOL argumentBuffersAllowed;
@property (readonly) unsigned long long objectListCount;
@property (readonly, copy) id<PGDeserializer> deserializer;
@property (readonly) id<MTLDevice> mtlDevice;
@property (readonly) const struct APVFeatures { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; } *features;
@property (readonly) id<MTLComputePipelineState> blitInRGB_2P_XR10_A8_pipeline;
@property (readonly) id<MTLComputePipelineState> blitOutRGB_2P_XR10_A8_pipeline;
@property (readonly) BOOL supportsBufferWithAddressRanges;
@property (readonly) BOOL supportsHeapWithAddressRanges;
@property (readonly) BOOL supportsResourceDetachBacking;
@property (readonly) id<MTLCommandQueue> pagingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)teardown;
- (void)deleteResource:(unsigned int)a0;
- (id)newBufferForVirtualPage:(unsigned int)a0 length:(unsigned long long)a1;
- (struct shared_ptr<PGVirtualMemoryCursor> { struct PGVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })cursorFromVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (id)addressRangesForVirtualPage:(unsigned int)a0 length:(unsigned long long)a1 readOnly:(BOOL *)a2;
- (id)backingForID:(unsigned int)a0;
- (void)copyFromVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1 dst:(void *)a2;
- (id)dataFromVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)deleteObjectWithSerializedData:(const void *)a0 serializedDataSize:(unsigned long long)a1;
- (void)discardResources:(const struct { unsigned int x0; } *)a0 count:(unsigned int)a1;
- (void)flushResources;
- (id)getExistingHostResource:(unsigned int)a0;
- (id)getHostResource:(unsigned int)a0;
- (void)getObject:(unsigned int)a0 entry:(struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned long long x2; } *)a1;
- (void)invalidateGuestForSharedTextureBacking:(unsigned int *)a0 sharedTextureBackingCount:(unsigned int)a1;
- (void)invalidateResources:(const struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } *)a0 count:(unsigned int)a1;
- (void)mapMemoryAtOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (void *)mappedAddressForOffset:(unsigned long long)a0 length:(unsigned long long)a1 needWritable:(BOOL)a2;
- (id)newSharedTextureHandleForID:(unsigned int)a0;
- (id)newVirtualMapping:(unsigned long long)a0 length:(unsigned long long)a1 needWritable:(BOOL)a2;
- (unsigned long long)nextTraceID;
- (void)prepareBacking:(id)a0 inEncoder:(id)a1;
- (void)rebuildTask;
- (void)releaseIOSurfaceWithMappingID:(unsigned long long)a0 surface:(id)a1;
- (void)replacePhysical:(unsigned int)a0;
- (id)retainIOSurfaceWithMappingID:(unsigned long long)a0;
- (void)setObjectListOffset:(unsigned long long)a0 length:(unsigned int)a1;
- (void)synchronizeBacking:(id)a0 inEncoder:(id)a1;
- (void)synchronizeResources:(const struct { unsigned int x0; } *)a0 count:(unsigned int)a1 discard:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)unmapMemoryAtOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (struct shared_ptr<PGWritableVirtualMemoryCursor> { struct PGWritableVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })writableCursorFromVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)writeToVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1 src:(const void *)a2;

@end
