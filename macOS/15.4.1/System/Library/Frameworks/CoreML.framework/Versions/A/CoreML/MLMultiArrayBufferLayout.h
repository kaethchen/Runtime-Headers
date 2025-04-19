@class NSArray;

@interface MLMultiArrayBufferLayout : NSObject {
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _scalarStrides;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _bufferStrides;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _innerToOuterIndices;
    long long _contiguousScalarBlockSize;
    BOOL _firstMajorLayout;
    BOOL _firstMajorContiguousLayout;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) NSArray *strides;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)_nonTrivialScalarIndexAtOffset:(long long)a0;
- (id)_equivalentFirstMajorBufferLayout;
- (long long)_nonTrivialOffsetOfScalarAtIndex:(long long)a0;
- (long long)_scalarIndexAtOffset:(long long)a0 contiguousScalars:(long long *)a1;
- (id)initWithShape:(id)a0 strides:(id)a1;
- (BOOL)isSubspaceOfBufferLayout:(id)a0;
- (long long)offsetOfScalarAtIndex:(long long)a0 contiguousScalars:(long long *)a1;

@end
