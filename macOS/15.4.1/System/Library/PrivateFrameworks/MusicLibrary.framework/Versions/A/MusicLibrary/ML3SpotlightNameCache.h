@class ML3MusicLibrary;

@interface ML3SpotlightNameCache : NSObject {
    struct unordered_map<long long, std::string, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, std::string>>> { struct __hash_table<std::__hash_value_type<long long, std::string>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, std::string>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, std::string>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, std::string>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, std::string>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, std::string>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, std::string>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _map;
    BOOL _idle;
    ML3MusicLibrary *_library;
}

+ (void)initialize;
+ (id)copyFromLibrary:(id)a0 cancelHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithLibrary:(id)a0 cancelHandler:(id /* block */)a1;

@end
