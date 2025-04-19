@class ITMediaItem;

@interface ITMediaCollection : ITMediaEntity {
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned long long>> { float __value_; } __p3_; } __table_; } _persistentIDSet;
    unsigned long long _representativeItemPersistentID;
    ITMediaItem *_representativeItem;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) ITMediaItem *representativeItem;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addIdentifier:(unsigned long long)a0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (BOOL)hasIdentifier:(unsigned long long)a0;

@end
