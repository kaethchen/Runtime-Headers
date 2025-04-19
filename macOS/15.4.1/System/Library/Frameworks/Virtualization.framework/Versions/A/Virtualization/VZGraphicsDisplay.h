@class __end_, __end_cap_, _VZFramebuffer, VZVirtualMachine, NSObject, VZVirtualMachineView;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VZGraphicsDisplay : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    _VZFramebuffer *_framebuffer;
    unsigned long long _graphicsDeviceIndex;
    unsigned long long _framebufferIndex;
    BOOL _supportsReconfiguration;
    VZVirtualMachineView *_liveResizeConnectedView;
    int _resizeState;
    struct DispatchSourceTimer { struct CfPtr<NSObject<OS_dispatch_source> *> { NSObject<OS_dispatch_source> *_ptr; } _source; } _resizeAwaitingSizeFailsafeTimer;
    struct DispatchSourceTimer { struct CfPtr<NSObject<OS_dispatch_source> *> { NSObject<OS_dispatch_source> *_ptr; } _source; } _resizeQuiesceTimer;
    unsigned int _resizeQuiesceFrameCount;
    struct vector<__weak id<VZGraphicsDisplayObserver>, std::allocator<__weak id<VZGraphicsDisplayObserver>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<__weak id<VZGraphicsDisplayObserver> *, std::allocator<__weak id<VZGraphicsDisplayObserver>>> { id *__value_; } x1; } _observers;
}

@property (readonly) struct CGSize { double x0; double x1; } sizeInPixels;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id).cxx_construct;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_configuration;
- (id)_graphicsDevice;
- (struct variant<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct __impl<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display> { struct Display { struct Size<unsigned long long> { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; int x2; int x3; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct Scanout { struct Rect<unsigned int> { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_displayConfiguration;
- (BOOL)_matchesConfiguration:(id)a0;
- (BOOL)_matchesSize:(struct CGSize { double x0; double x1; })a0;
- (void)_takeScreenshotWithCompletionHandler:(id /* block */)a0;
- (id)initWithVirtualMachine:(id)a0 graphicsDeviceIndex:(unsigned long long)a1 framebufferIndex:(unsigned long long)a2;
- (BOOL)reconfigureWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)reconfigureWithSizeInPixels:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;

@end
