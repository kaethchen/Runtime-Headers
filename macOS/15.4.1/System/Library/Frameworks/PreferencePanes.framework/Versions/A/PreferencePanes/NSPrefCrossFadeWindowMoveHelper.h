@class NSPrefCrossFadeWindow;

@interface NSPrefCrossFadeWindowMoveHelper : NSObject {
    struct __CFRunLoopTimer { } *_moveTimer;
    struct __CFRunLoop { } *_runLoop;
    double _startTime;
    double _totalTime;
    double _percent;
    NSPrefCrossFadeWindow *_window;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    double _screenMaxY;
    BOOL _done;
    BOOL _displayFlag;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopAnimation;
- (void)_doAnimation:(BOOL)a0;
- (void)_resizeWindow:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 display:(BOOL)a2;

@end
