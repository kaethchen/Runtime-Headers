@class __end_cap_, _VZCustomVirtioDeviceConfiguration, NSObject, __end_;
@protocol OS_xpc_object, _VZPluginConnectionDelegate, OS_dispatch_queue, _VZCustomVirtioDeviceDelegate;

@interface _VZCustomVirtioDevice : NSObject {
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _device_queue;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _messenger_queue;
    NSObject<OS_xpc_object> *_connection;
    unsigned long long _deviceIndex;
    BOOL _guestDidAcceptDriverOk;
    _VZCustomVirtioDeviceConfiguration *_configuration;
    struct unique_ptr<Vz::CustomVirtioDeviceManager, std::default_delete<Vz::CustomVirtioDeviceManager>> { struct __compressed_pair<Vz::CustomVirtioDeviceManager *, std::default_delete<Vz::CustomVirtioDeviceManager>> { struct CustomVirtioDeviceManager *__value_; } __ptr_; } _device_manager;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _driverFeatures;
    struct vector<_VZVirtioQueue *, std::allocator<_VZVirtioQueue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<_VZVirtioQueue *__strong *, std::allocator<_VZVirtioQueue *>> { id *__value_; } x1; } _queues;
    NSObject<OS_xpc_object> *_anonymous_connection;
    id<_VZCustomVirtioDeviceDelegate> _delegate;
    id<_VZPluginConnectionDelegate> _connectionDelegate;
}

@property (weak) id<_VZCustomVirtioDeviceDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)driverFeaturesAt:(unsigned int)a0 error:(id *)a1;
- (id)guestMemoryAtPhysicalAddress:(unsigned long long)a0 length:(unsigned long long)a1;
- (id)queueAtIndex:(unsigned short)a0;
- (void)requestDeviceReset;
- (void)updateDeviceSpecificConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
