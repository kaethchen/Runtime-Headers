@class __end_, TSCEPartialResult, __end_cap_;

@interface TSCEPartialResultTree : NSObject {
    struct vector<TSCEPartialResult *, std::allocator<TSCEPartialResult *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEPartialResult *__strong *, std::allocator<TSCEPartialResult *>> { id *__value_; } x1; } _resultStack;
    struct unordered_map<unsigned int, NSString *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned int, NSString *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _symbolLookup;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _thunkOffsets;
}

@property (readonly, nonatomic) TSCEPartialResult *root;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)a0;
- (id).cxx_construct;
- (id)lookupSymbol:(unsigned int)a0;
- (void *)symbolLookupMap;
- (void)addPartialResult:(id)a0;
- (void)addSymbol:(unsigned int)a0 mappedToIdentifier:(id)a1;
- (unsigned int)currentThunkOffset;
- (void)popThunkOffset;
- (void)pushThunkOffset:(unsigned int)a0;

@end
