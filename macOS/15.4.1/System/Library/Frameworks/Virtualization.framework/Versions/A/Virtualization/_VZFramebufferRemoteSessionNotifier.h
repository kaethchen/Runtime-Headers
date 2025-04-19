@class _VZFramebuffer, NSObject;
@protocol OS_dispatch_queue;

@interface _VZFramebufferRemoteSessionNotifier : NSObject {
    _VZFramebuffer *_framebuffer;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    BOOL _registeredForNotifications;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
