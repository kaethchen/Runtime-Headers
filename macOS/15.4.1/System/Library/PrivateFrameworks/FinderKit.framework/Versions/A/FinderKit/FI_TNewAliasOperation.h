@interface FI_TNewAliasOperation : FI_TRenameOperation {
    struct unordered_map<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>>> { struct __hash_table<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::hash<TFENode>, std::equal_to<TFENode>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::equal_to<TFENode>, std::hash<TFENode>>> { float __value_; } __p3_; } __table_; } _recordsTable;
    struct __hash_map_const_iterator<std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *>> { struct __hash_const_iterator<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> { void *__node_; } __i_; } _recordsTableIter;
    struct __wrap_iter<const std::pair<TFENode, TFENodePropertyList> *> { void *__i_; } _recordIter;
    BOOL _addAliasSuffix;
    BOOL _creatingAliasInPBF;
    BOOL _isRenaming;
}

@property (readonly, nonatomic, getter=isRedirectedToDesktop) BOOL redirectedToDesktop;

+ (id)operationWithNodes:(const void *)a0 properties:(const void *)a1 destinationNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 allowInteraction:(BOOL)a3 addAliasSuffix:(BOOL)a4 allowRedirection:(BOOL)a5 delegate:(id)a6;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)createNewAlias:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 properties:(const void *)a1 addAliasSuffix:(BOOL)a2;
- (int)createNewAliases;
- (int)handleSuboperationCompleted:(unsigned int)a0 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (BOOL)isDoneCreatingAliases;
- (id)makeDelegate;
- (void)reconfigureToRenameNodes:(const void *)a0;

@end
