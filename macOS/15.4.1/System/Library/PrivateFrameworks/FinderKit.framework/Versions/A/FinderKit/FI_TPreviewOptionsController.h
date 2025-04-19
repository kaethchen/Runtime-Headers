@interface FI_TPreviewOptionsController : NSObject {
    struct unordered_map<TString, FI_TPreviewOptions *, std::hash<TString>, std::equal_to<TString>, std::allocator<std::pair<const TString, FI_TPreviewOptions *>>> { struct __hash_table<std::__hash_value_type<TString, FI_TPreviewOptions *>, std::__unordered_map_hasher<TString, std::__hash_value_type<TString, FI_TPreviewOptions *>, std::hash<TString>, std::equal_to<TString>>, std::__unordered_map_equal<TString, std::__hash_value_type<TString, FI_TPreviewOptions *>, std::equal_to<TString>, std::hash<TString>>, std::allocator<std::__hash_value_type<TString, FI_TPreviewOptions *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TString, FI_TPreviewOptions *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TString, std::__hash_value_type<TString, FI_TPreviewOptions *>, std::hash<TString>, std::equal_to<TString>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TString, std::__hash_value_type<TString, FI_TPreviewOptions *>, std::equal_to<TString>, std::hash<TString>>> { float __value_; } __p3_; } __table_; } _utiOptionsMap;
    struct unique_ptr<TMetadataAvailability, std::default_delete<TMetadataAvailability>> { struct __compressed_pair<TMetadataAvailability *, std::default_delete<TMetadataAvailability>> { struct TMetadataAvailability *__value_; } __ptr_; } _metadataSource;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _cacheLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_init;
- (id)optionsForNodes:(void *)a0 synchronous:(BOOL)a1;
- (id)optionsForUTI:(const void *)a0;
- (void)saveOptions:(id)a0;

@end
