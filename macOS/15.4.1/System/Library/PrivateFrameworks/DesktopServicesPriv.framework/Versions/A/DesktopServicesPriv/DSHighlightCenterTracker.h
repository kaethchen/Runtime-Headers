@class NSString, NSObject, SWHighlightCenter;
@protocol OS_dispatch_queue;

@interface DSHighlightCenterTracker : NSObject <SWHighlightCenterDelegate> {
    SWHighlightCenter *_highlightCenter;
    struct unordered_set<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct __hash_table<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TString, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TString, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TString, void *> *>, std::allocator<std::__hash_node<TString, void *>>> { struct __hash_node_base<std::__hash_node<TString, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TString>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TString>> { float __value_; } __p3_; } __table_; } _trackedIdentifiers;
    struct unordered_set<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct __hash_table<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TString, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TString, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TString, void *> *>, std::allocator<std::__hash_node<TString, void *>>> { struct __hash_node_base<std::__hash_node<TString, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TString>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TString>> { float __value_; } __p3_; } __table_; } _missedIdentifiers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } fLock;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)fetchAttributionsForHighlight:(id)a0;
- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)highlightForIdentifier:(struct __CFString { } *)a0;

@end
