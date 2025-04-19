@interface _NSScrollingConcurrentSharedData : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _synchMutex;
    struct CGPoint { double x; double y; } _canonicalClipBoundsOrigin;
    struct CGPoint { double x; double y; } _velocity;
    BOOL _isDrawingVisibleRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastValidRenderedContentRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _documentFrame;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
    struct CGSize { double width; double height; } _clipViewSize;
    struct CGPoint { double x; double y; } _clipViewOrigin;
    double _progress;
    double _lastScrollDirection;
    double _lastFastFrameTimestamp;
    long long _referencePageNumber;
    long long _swipeCount;
    double _instantaneousVelocity;
    BOOL _isMomentumScrolling;
}

- (void)dealloc;
- (id)init;
- (id)initWithConstantData:(id)a0;
- (void)threadSafePropertyAccess:(id /* block */)a0;

@end
