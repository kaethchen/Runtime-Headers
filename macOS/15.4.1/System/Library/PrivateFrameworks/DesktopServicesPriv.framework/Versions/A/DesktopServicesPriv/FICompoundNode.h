@class NSArray;

@interface FICompoundNode : FICustomNode {
    struct unordered_set<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> { struct __hash_table<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *>, std::allocator<std::__hash_node<FINode *, void *>>> { struct __hash_node_base<std::__hash_node<FINode *, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<FINode *>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<FINode *>> { float __value_; } __p3_; } __table_; } _nodesToComplete;
    BOOL _openSyncStartedSent;
}

@property (readonly, nonatomic) NSArray *nodes;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)fileURL;
- (id)shortDescription;
- (id)longDescription;
- (void)dispatchEvent:(id)a0 forObserver:(id)a1;
- (id)fpItem;
- (id)initWithFINodes:(id)a0;
- (id)iteratorWithOptions:(unsigned int)a0;
- (id)nodesForSizing;
- (id)nodesToObserve;
- (void)startObserving:(unsigned int)a0 with:(struct OpaqueEventNotifier { } *)a1;
- (void)stopObserving:(unsigned int)a0 with:(struct OpaqueEventNotifier { } *)a1;
- (void)synchronizeChildren:(unsigned int)a0 events:(void *)a1;

@end
