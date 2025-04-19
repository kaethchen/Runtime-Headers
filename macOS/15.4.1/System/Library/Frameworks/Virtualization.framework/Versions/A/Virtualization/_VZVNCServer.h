@class NSString, _VZFramebuffer, VZVirtualMachine, _VZVNCSecurityConfiguration, NSObject;
@protocol _VZVNCServerDelegate, OS_dispatch_queue;

@interface _VZVNCServer : NSObject <_VZFramebufferObserver> {
    struct Mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfair_lock; } _virtualMachineMutex;
    VZVirtualMachine *_virtualMachine;
    _VZFramebuffer *_framebuffer;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _serverQueue;
    struct unique_ptr<Vnc::Server, std::default_delete<Vnc::Server>> { struct __compressed_pair<Vnc::Server *, std::default_delete<Vnc::Server>> { struct Server *__value_; } __ptr_; } _server;
    struct unique_ptr<(anonymous namespace)::ServerDelegate, std::default_delete<(anonymous namespace)::ServerDelegate>> { struct __compressed_pair<(anonymous namespace)::ServerDelegate *, std::default_delete<(anonymous namespace)::ServerDelegate>> { struct ServerDelegate *__value_; } __ptr_; } _serverDelegate;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _delegateQueue;
    struct optional<Graphics::Size<unsigned int>> { union { char __null_state_; struct Size<unsigned int> { unsigned int _width; unsigned int _height; } __val_; } ; BOOL __engaged_; } _lastFramebufferSize;
    struct optional<VzCore::Hardware::MultiTouchEvent::Touch> { union { char __null_state_; struct Touch { unsigned char transducer_index : 6; int phase; struct Location { double x; double y; } location; struct OptionSet<VzCore::Hardware::MultiTouchEvent::Touch::SwipeAim> { unsigned int _storage; } swipe_aim; double timestamp; } __val_; } ; BOOL __engaged_; } _currentTouch;
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _protectionOptions;
}

@property long long state;
@property (weak) id<_VZVNCServerDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned short port;
@property (readonly, copy) _VZVNCSecurityConfiguration *securityConfiguration;
@property (retain) VZVirtualMachine *virtualMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)start;
- (void)stop;
- (id)initWithPort:(unsigned short)a0;
- (void)framebufferDidUpdateColorSpace:(id)a0;
- (void)framebuffer:(id)a0 didUpdateCursor:(struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *x0; struct __shared_weak_count *x1; })a1;
- (void)framebuffer:(id)a0 didUpdateFrame:(struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *x0; struct __shared_weak_count *x1; })a1;
- (void)framebuffer:(id)a0 didUpdateGraphicsOrientation:(long long)a1;
- (struct optional<unsigned long long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })getDisplayProtectionOptions;
- (id)initWithBonjourServiceName:(id)a0;
- (id)initWithBonjourServiceName:(id)a0 queue:(id)a1;
- (id)initWithBonjourServiceName:(id)a0 queue:(id)a1 securityConfiguration:(id)a2;
- (id)initWithPort:(unsigned short)a0 queue:(id)a1;
- (id)initWithPort:(unsigned short)a0 queue:(id)a1 securityConfiguration:(id)a2;

@end
