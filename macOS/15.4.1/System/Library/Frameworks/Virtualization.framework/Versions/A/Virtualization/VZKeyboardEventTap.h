@class NSObject, VZVirtualMachineView;
@protocol OS_xpc_object;

@interface VZKeyboardEventTap : NSObject {
    VZVirtualMachineView *_view;
    NSObject<OS_xpc_object> *_connection;
    struct unique_ptr<KeyboardEventTapMessenger, std::default_delete<KeyboardEventTapMessenger>> { struct __compressed_pair<KeyboardEventTapMessenger *, std::default_delete<KeyboardEventTapMessenger>> { struct KeyboardEventTapMessenger *__value_; } __ptr_; } _messenger;
    struct unordered_multiset<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> { struct __hash_node_base<std::__hash_node<long long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<long long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<long long>> { float __value_; } __p3_; } __table_; } _keysDown;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
