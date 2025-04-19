@class _NSBrowserColumnView, _NSBrowserScrollView;

@interface _NSBrowserColumnScrollHelper : NSObject {
    _NSBrowserScrollView *_scrollView;
    _NSBrowserColumnView *_optimizableColumn;
    struct CGPoint { double x; double y; } _initialOrigin;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destinationRect;
    double _totalDistance;
    double _totalDuration;
    struct __BrcshFlags { unsigned char done : 1; unsigned char animate : 1; unsigned char shouldPostScrollNotifications : 1; unsigned char needsEndColumnAnimationOptimization : 1; unsigned int reserved : 28; } _brcshFlags;
    double _startTime;
    struct __CFRunLoopTimer { } *_timer;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopObserver { } *_displayWindowForBrowserObserver;
}

- (void)dealloc;
- (void)_doAnimation;
- (void)_doAnimationStep;
- (id)_enclosingBrowserView;
- (void)_invalidateRunLoopTimer;
- (void)_scrollToFinalPosition;
- (void)_scrollToPosition:(long long)a0;
- (void)_setupRunLoopTimer;
- (void)_stopAnimation;
- (void)changeDestinationToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inScrollView:(id)a1 animate:(BOOL)a2;
- (void)setOptimizableColumn:(id)a0;

@end
