@class NSArray, NSTextFinder, NSView, NSString, NSMutableArray, NSWindow;
@protocol NSFindIndicatorDelegate;

@interface NSFindIndicator : NSObject <NSImmediateActionAnimationController> {
    NSArray *_rects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _animationInProgress;
    id _invoker;
    double _startTime;
    NSMutableArray *_windows;
    BOOL _shouldFade;
    BOOL _visible;
}

@property (retain) NSTextFinder *textFinder;
@property (copy) id /* block */ imageProvider;
@property (retain) NSWindow *parentWindow;
@property (copy) NSArray *rects;
@property (getter=isVisible) BOOL visible;
@property id<NSFindIndicatorDelegate> delegate;
@property BOOL usesThreadedAnimation;
@property (retain) NSView *view;
@property (copy) id /* block */ contentDrawer;
@property (copy) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)beginDrawing;
+ (void)endDrawing;
+ (BOOL)isDrawing;

- (void)dealloc;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (void)_cancel;
- (void)_pulse:(double)a0;
- (id)_buildFindIndicatorWindows;
- (void)_cacheDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 toBitmapImageRep:(id)a2;
- (id)_contentImage;
- (void)_dissolve:(double)a0 animate:(BOOL)a1;
- (id)_effectiveParentWindow;
- (void)_fade:(double)a0;
- (id)_findIndicatorPathForRects:(id)a0;
- (id)_indicatorWindowGroupsOfRectGroupsForRects:(id)a0;
- (void)_redrawReusingWindows;
- (void)dissolve;
- (void)focusUAZoom;
- (void)pulseAndFade:(BOOL)a0;
- (void)pulseWithFade:(BOOL)a0 andDissolve:(BOOL)a1;
- (void)recognizerDidCancelAnimation:(id)a0;
- (void)recognizerDidDismissAnimation:(id)a0;
- (void)recognizerDidUpdateAnimation:(id)a0;
- (void)recognizerWillBeginAnimation:(id)a0;
- (void)updateWithRects:(id)a0;

@end
