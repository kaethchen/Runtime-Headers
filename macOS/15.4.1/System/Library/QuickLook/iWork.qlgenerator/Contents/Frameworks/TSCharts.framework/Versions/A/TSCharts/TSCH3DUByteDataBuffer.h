@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned char>, std::allocator<TSCH3D::PODType<unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::allocator<TSCH3D::PODType<unsigned char>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void).cxx_destruct;
- (unsigned long long)count;
- (const void *)data;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void)clear;
- (unsigned long long)components;
- (int)componentType;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
