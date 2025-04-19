@class CALayer, AXVOverlayWindow, AXFMouseCursorImage;

@interface AXVMouseCursor : NSObject

@property (retain, nonatomic) AXVOverlayWindow *_overlayWindow;
@property (retain, nonatomic) CALayer *_imageLayer;
@property (retain) AXFMouseCursorImage *_atomicCursorImage;
@property struct CGPoint { double x; double y; } _atomicLocation;
@property double _atomicCursorScale;
@property BOOL _atomicKeepCursorImageSynchronizedWithSystem;
@property (retain) AXFMouseCursorImage *cursorImage;
@property BOOL keepCursorImageSynchronizedWithSystem;
@property struct CGPoint { double x0; double x1; } location;
@property double cursorScale;
@property (readonly, nonatomic) BOOL visible;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)hide;
- (void)show;
- (void)_updateCursorScale;
- (void)_updateImageLayerFrame;

@end
