@class _NSTextFinderImpl, NSMapTable, NSView, _NSFindIndicatorOverlayView, NSMutableArray, NSWindow;

@interface NSTextFinderIndicatorManager : NSObject {
    NSMapTable *_findIndicators;
    _NSTextFinderImpl *_textFinderImpl;
    BOOL _isVisible;
    BOOL _updating;
    NSView *_contentView;
    NSWindow *_overlayWindow;
    _NSFindIndicatorOverlayView *_overlayView;
    unsigned long long _disabledScreenUpdatesToken;
    BOOL _needsUpdate;
    BOOL *_updateCancel;
    BOOL *_pulseCancel;
    NSMutableArray *_indicatorsToPulse;
}

+ (id)_textRects:(id)a0 inWebViewCoordinateSpace:(id)a1;

- (void)dealloc;
- (void)cancel;
- (id)_textFinderImpl;
- (void)setNeedsUpdate:(BOOL)a0;
- (void)_containerDidChange;
- (id)_contentView;
- (void)_delayedUpdate;
- (void)_enumerateViewsAndRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (void)_flushUpdate;
- (void)_hideAnimate:(BOOL)a0;
- (id)_parentWindow;
- (void)_scheduleDelayedUpdate;
- (void)_showAnimate:(BOOL)a0;
- (id)initWithTextFinderImpl:(id)a0;
- (BOOL)isVisible;
- (BOOL)needsUpdate;
- (void)pulse;
- (void)setIsVisible:(BOOL)a0 animate:(BOOL)a1;

@end
