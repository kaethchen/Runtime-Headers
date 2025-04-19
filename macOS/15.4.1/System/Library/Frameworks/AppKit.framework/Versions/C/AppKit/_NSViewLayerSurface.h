@class NSCGSWindowLayerSurface, NSView, NSArray, NSWindow;
@protocol NSObject;

@interface _NSViewLayerSurface : NSObject {
    NSView *_view;
    NSWindow *_window;
    NSCGSWindowLayerSurface *_surface;
    id<NSObject> _viewGeometryObserver;
    NSArray *_windowObservers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithView:(id)a0;
- (void)update;

@end
