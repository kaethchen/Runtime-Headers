@interface _RSRawPointCloud : NSObject <RSRawPointCloud> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _points;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const void *points;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
