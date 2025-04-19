@class __end_cap_, VZVirtualMachine, NSObject, __end_;
@protocol OS_dispatch_queue;

@interface VZVirtioSocketDevice : VZSocketDevice {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    unsigned long long _guestContextID;
    struct map<unsigned int, VZVirtioSocketListener *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, VZVirtioSocketListener *>>> { struct __tree<std::__value_type<unsigned int, VZVirtioSocketListener *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, VZVirtioSocketListener *>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, VZVirtioSocketListener *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, VZVirtioSocketListener *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, VZVirtioSocketListener *>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _listeners;
    struct vector<VZVirtioSocketConnection *__weak, std::allocator<VZVirtioSocketConnection *__weak>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<VZVirtioSocketConnection *__weak *, std::allocator<VZVirtioSocketConnection *__weak>> { id *__value_; } x1; } _guest_connections;
    struct vector<PendingGuestConnection, std::allocator<PendingGuestConnection>> { struct PendingGuestConnection *__begin_; struct PendingGuestConnection *__end_; struct __compressed_pair<PendingGuestConnection *, std::allocator<PendingGuestConnection>> { struct PendingGuestConnection *__value_; } __end_cap_; } _pending_guest_connections;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)connectToPort:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)removeSocketListenerForPort:(unsigned int)a0;
- (void)setSocketListener:(id)a0 forPort:(unsigned int)a1;

@end
