@class NSMutableDictionary;

@interface PHASESoundEventNodeAsset : PHASEAsset {
    struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> { struct __compressed_pair<Phase::ActionTree *, std::default_delete<Phase::ActionTree>> { struct ActionTree *__value_; } __ptr_; } _actionTreeOwnedAsset;
    const void *_actionTreeReference;
    struct unordered_map<unsigned long long, std::deque<int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::deque<int>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::deque<int>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::deque<int>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _randomHistory;
}

@property (readonly, nonatomic) NSMutableDictionary *streamNodeFormats;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)sizeInBytes;
- (const void *)getActionTree;
- (void *)getRandomHistory:(unsigned long long)a0;
- (id)initWithUID:(id)a0 actionTreeWeakReference:(const void *)a1 assetRegistry:(id)a2 details:(id)a3;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (id)initWithUID:(id)a0 ownedActionTree:(struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> { struct __compressed_pair<Phase::ActionTree *, std::default_delete<Phase::ActionTree>> { struct ActionTree *x0; } x0; })a1 assetRegistry:(id)a2 details:(id)a3;

@end
