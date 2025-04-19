@interface VMUSimpleSerializer : VMUAbstractSerializer {
    struct unordered_map<const char *, unsigned int, cstring_callbacks, cstring_callbacks, std::allocator<std::pair<const char *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<const char *, unsigned int>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, cstring_callbacks, cstring_callbacks>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, cstring_callbacks, cstring_callbacks>, std::allocator<std::__hash_value_type<const char *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, cstring_callbacks, cstring_callbacks>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, cstring_callbacks, cstring_callbacks>> { float __value_; } __p3_; } __table_; } _internMap;
    unsigned int _internCursor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)serializeString:(id)a0;
- (void)_serializeValues:(unsigned int *)a0 count:(unsigned int)a1;
- (id)copyContiguousData;
- (void)serialize32:(unsigned int)a0;
- (void)serialize64:(unsigned long long)a0;
- (unsigned int)serializeNullTerminatedBytes:(const char *)a0;

@end
