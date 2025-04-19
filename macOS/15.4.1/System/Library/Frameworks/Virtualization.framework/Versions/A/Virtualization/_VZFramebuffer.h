@class _VZFramebufferRemoteSessionNotifier, VZGraphicsDisplay, VZVirtualMachine, NSObject;
@protocol OS_dispatch_queue;

@interface _VZFramebuffer : NSObject {
    VZVirtualMachine *_virtualMachine;
    VZGraphicsDisplay *_display;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    unsigned long long _graphicsDeviceIndex;
    unsigned long long _framebufferIndex;
    unsigned long long _currentFrameRate;
    unsigned long long _protectionOptions;
    BOOL _pendingProtectionOptionsUpdate;
    struct CfPtr<CGColorSpace *> { struct CGColorSpace *_ptr; } _colorSpace;
    struct vector<FramebufferObserver, std::allocator<FramebufferObserver>> { struct FramebufferObserver *__begin_; struct FramebufferObserver *__end_; struct __compressed_pair<FramebufferObserver *, std::allocator<FramebufferObserver>> { struct FramebufferObserver *__value_; } __end_cap_; } _observers;
    _VZFramebufferRemoteSessionNotifier *_notifier;
    struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastFrameUpdate;
    struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastCursorUpdate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
