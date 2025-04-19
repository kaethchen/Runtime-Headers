@class NSURL, TGIE5ANESessionObjC, NSObject;
@protocol OS_os_log;

@interface TGIE5BaseModelObjC : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSURL *modelURL;
@property struct shared_ptr<cgm::token_generation_inference::espresso_inference::AJAXE5MLModelBase> { struct AJAXE5MLModelBase *__ptr_; struct __shared_weak_count *__cntrl_; } baseModel;
@property (readonly) BOOL useEnergyEfficientMode;
@property (retain) TGIE5ANESessionObjC *aneSession;
@property (readonly, nonatomic) struct unordered_map<std::string, std::shared_ptr<E5RT::MemoryObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } sharedConstants;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)load:(id *)a0;
- (id)initWithModelConfiguration:(id)a0;
- (void)moveToDynamicState;
- (void)moveToFullyLoadedState;

@end
