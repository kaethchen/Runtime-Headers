@class NSCursor, NSString, NSImageView, _VZFramebuffer, NSNumber, NSObject;
@protocol MTLCommandQueue;

@interface _VZFramebufferView : NSView <CALayerDelegate, _VZFramebufferObserver> {
    _VZFramebuffer *_framebuffer;
    BOOL _showsCursor;
    BOOL _suppressFrameUpdates;
    struct CGSize { double width; double height; } _framebufferSize;
    id _occlusionObserver;
    struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastNonEmptyFrameUpdate;
    struct optional<CGPoint> { union { char __null_state_; struct CGPoint { double x; double y; } __val_; } ; BOOL __engaged_; } _currentCursorPosition;
    NSImageView *_cursorView;
    NSCursor *_unscaledCursor;
    double _scaleX;
    double _scaleY;
    struct optional<_VZVirtualMachineGraphicsOrientation> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } _viewOrientation;
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _protectionOptions;
    NSObject<MTLCommandQueue> *_displayQueue;
    double _backingScaleFactor;
    BOOL _hasToneMappingLayer;
}

@property (retain) NSCursor *cursor;
@property (retain) _VZFramebuffer *framebuffer;
@property BOOL showsCursor;
@property (readonly) struct CGSize { double x0; double x1; } framebufferSize;
@property BOOL suppressFrameUpdates;
@property (readonly, copy) NSNumber *displayProtectionOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)layout;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setWantsLayer:(BOOL)a0;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)framebufferDidUpdateColorSpace:(id)a0;
- (void)framebuffer:(id)a0 didUpdateCursor:(struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *x0; struct __shared_weak_count *x1; })a1;
- (void)framebuffer:(id)a0 didUpdateFrame:(struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *x0; struct __shared_weak_count *x1; })a1;
- (void)framebuffer:(id)a0 didUpdateGraphicsOrientation:(long long)a1;
- (struct optional<unsigned long long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })getDisplayProtectionOptions;

@end
