@class NSWindow;

@interface DRMoveHelper : NSObject {
    struct __CFRunLoopTimer { } *_moveTimer;
    double _startTime;
    double _totalTime;
    float _percent;
    void *_effect;
    NSWindow *_window;
    NSWindow *_sheet;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGPoint { double x; double y; } _sheetOrigin;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetStartFrame;
    float _screenMaxY;
    float _sheetHeight;
    long long _flavor;
    BOOL _done;
    BOOL _displayFlag;
    struct CGPoint { double x; double y; } _collapsedOrigin;
    struct CGPoint { double x; double y; } _stashedOrigin;
}

- (void)dealloc;
- (id)init;
- (void)_positionWindow;
- (void)_animatePanel;
- (void)_animateSheet;
- (void)_doAnimation;
- (void)_stashOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_stashedOrigin;
- (void)_stopAnimation;
- (void)_collapseSheet:(id)a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 andMoveParent:(id)a3;
- (void)_collapseWindow:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })_collapsedWindowOrigin;
- (void)_expandSheet:(id)a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 andMoveParent:(id)a3;
- (void)_expandWindow:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_startMove;
- (void)_startSheet;
- (void)_stashCollapsedWindowOrigin:(struct CGPoint { double x0; double x1; })a0;

@end
