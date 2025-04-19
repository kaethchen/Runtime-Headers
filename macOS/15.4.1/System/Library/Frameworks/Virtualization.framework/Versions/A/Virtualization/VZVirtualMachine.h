@class _VZDebugStub, NSArray, VZVirtualMachineConfiguration, NSString, _VZKeyboard, NSObject, _VZPointingDevice;
@protocol VZVirtualMachineDelegate, OS_dispatch_queue, OS_xpc_object;

@interface VZVirtualMachine : NSObject {
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _messenger_queue;
    NSObject<OS_xpc_object> *_connection;
    struct shared_ptr<Vz::SharedRamManager> { struct SharedRamManager *__ptr_; struct __shared_weak_count *__cntrl_; } _shared_ram_manager;
    unsigned int _next_available_storage_device_index;
    NSString *_name;
    NSString *_crashContextMessage;
    VZVirtualMachineConfiguration *_configuration;
    NSArray *_audioDevices;
    NSArray *_guestAgents;
    NSArray *_keyboards;
    _VZKeyboard *_defaultKeyboard;
    NSArray *_pointingDevices;
    _VZPointingDevice *_defaultPointingDevice;
    NSArray *_multiTouchDevices;
    NSArray *_storageDevices;
    NSArray *_powerSourceDevices;
    NSArray *_serialPorts;
    unsigned long long _usbPassthroughPointingDeviceCount;
    NSArray *_coprocessors;
    struct optional<_VZDebugStub *> { union { char __null_state_; _VZDebugStub *__val_; } ; BOOL __engaged_; } _debugStub;
    struct optional<_VZVirtualMachineGraphicsOrientation> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } _graphicsOrientation;
    struct unique_ptr<Vz::VzVirtualMachineMessenger, std::default_delete<Vz::VzVirtualMachineMessenger>> { struct __compressed_pair<Vz::VzVirtualMachineMessenger *, std::default_delete<Vz::VzVirtualMachineMessenger>> { struct VzVirtualMachineMessenger *__value_; } __ptr_; } _messenger;
    struct unique_ptr<Base::DispatchSource, std::default_delete<Base::DispatchSource>> { struct __compressed_pair<Base::DispatchSource *, std::default_delete<Base::DispatchSource>> { struct DispatchSource *__value_; } __ptr_; } _cancellationSource;
    BOOL __guestDidStopSeenDuringOperation;
}

@property (class, readonly) BOOL _supportsNestedVirtualization;
@property (class, readonly, getter=isSupported) BOOL supported;

@property (readonly, copy) VZVirtualMachineConfiguration *_currentConfiguration;
@property (readonly) NSArray *_audioDevices;
@property (readonly) NSArray *_keyboards;
@property (readonly) NSArray *_pointingDevices;
@property (readonly) NSArray *_multiTouchDevices;
@property (readonly) NSArray *_powerSourceDevices;
@property (readonly) NSArray *_storageDevices;
@property (readonly) NSArray *_serialPorts;
@property (readonly) NSArray *_coprocessors;
@property (readonly) _VZDebugStub *_debugStub;
@property (readonly) NSString *_stateDescription;
@property (readonly) BOOL _canCreateCore;
@property (copy, setter=_setName:) NSString *_name;
@property (copy, setter=_setCrashContextMessage:) NSString *_crashContextMessage;
@property (readonly) long long _graphicsOrientation;
@property (readonly) int _serviceProcessIdentifier;
@property long long state;
@property (weak) id<VZVirtualMachineDelegate> delegate;
@property (readonly) BOOL canStart;
@property (readonly) BOOL canStop;
@property (readonly) BOOL canPause;
@property (readonly) BOOL canResume;
@property (readonly) BOOL canRequestStop;
@property (readonly, copy) NSArray *consoleDevices;
@property (readonly, copy) NSArray *directorySharingDevices;
@property (readonly, copy) NSArray *graphicsDevices;
@property (readonly, copy) NSArray *memoryBalloonDevices;
@property (readonly, copy) NSArray *networkDevices;
@property (readonly, copy) NSArray *socketDevices;
@property (readonly, copy) NSArray *usbControllers;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)pauseWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 queue:(id)a1;
- (void)_createCoreWithCompletionHandler:(id /* block */)a0;
- (void)_getUSBControllerLocationIDWithCompletionHandler:(id /* block */)a0;
- (void)_resetWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_saveMachineStateToURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)requestStopWithError:(id *)a0;
- (void)restoreMachineStateFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveMachineStateToURL:(id)a0 completionHandler:(id /* block */)a1;

@end
