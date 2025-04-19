@class NSString, _PGDevice;

@interface PGRemoteTaskDeviceDelegate : NSObject <ParavirtualizedGraphicsGPUDeviceProtocol> {
    _PGDevice *_device;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct unordered_map<unsigned long long, PGPtr<IOSurface *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PGPtr<IOSurface *>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PGPtr<IOSurface *>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _surfaces;
    struct PGAsync { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } _drainedCond; struct map<unsigned long long, std::shared_ptr<PGAsync::Token>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::shared_ptr<PGAsync::Token>>>> { struct __tree<std::__value_type<unsigned long long, std::shared_ptr<PGAsync::Token>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::shared_ptr<PGAsync::Token>>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, std::shared_ptr<PGAsync::Token>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::shared_ptr<PGAsync::Token>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::shared_ptr<PGAsync::Token>>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _tokens; unsigned long long _tokenID; BOOL _crashed; } _async;
}

@property (readonly) void *async;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0;
- (void)completeAsyncTokenID:(unsigned long long)a0 success:(unsigned int)a1 error:(id)a2;
- (void)invalidateGuestForSharedTextureBacking:(unsigned int *)a0 sharedTextureBackingCount:(unsigned int)a1;
- (struct shared_ptr<PGAsync::Token> { struct Token *x0; struct __shared_weak_count *x1; })newAsyncToken;
- (struct shared_ptr<PGAsync::Token> { struct Token *x0; struct __shared_weak_count *x1; })newAsyncTokenWithBlock:(id /* block */)a0;
- (void)newSharedTextureHandleForID:(unsigned int)a0 reply:(id /* block */)a1;
- (void)releaseIOSurfaceWithMappingID:(unsigned long long)a0;
- (void)remoteCrashed;
- (void)retainIOSurfaceWithMappingID:(unsigned long long)a0 reply:(id /* block */)a1;

@end
