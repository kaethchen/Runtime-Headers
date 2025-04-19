@class VFXFixedSizePage;

@interface VFXMTLBufferAllocatorSubBuffer : VFXMTLBuffer {
    VFXFixedSizePage *_parentPage;
}

- (void)dealloc;
- (id)initWithPage:(id)a0 allocator:(id)a1;

@end
