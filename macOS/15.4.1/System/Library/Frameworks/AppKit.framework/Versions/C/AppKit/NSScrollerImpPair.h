@class NSScrollView, NSTimer, NSTrackingArea, NSScrollerImp;
@protocol NSScrollerImpPairDelegate;

@interface NSScrollerImpPair : NSObject {
    NSScrollView *_scrollView;
    NSScrollerImp *_verticalScrollerImp;
    NSScrollerImp *_horizontalScrollerImp;
    long long _scrollerStyle;
    NSTimer *_overlayScrollerHideTimer;
    NSTrackingArea *_contentViewTrackingArea;
    struct CGPoint { double x; double y; } _lastMouseInContentPoint;
    struct { unsigned char isFlipped : 1; unsigned char wantsToFlashOverlayScrollers : 1; unsigned char windowIsVisible : 1; unsigned char inScrollGesture : 1; unsigned char scrollerKnobStyle : 2; unsigned char scrollerFlashPending : 1; unsigned char overlayScrollerStateLocked : 1; unsigned char inVertScroller : 1; unsigned char inHorzScroller : 1; unsigned char areScrollersCatchable : 1; unsigned char shouldFadeCaughtScroller : 1; unsigned int  : 20; } _flags;
}

@property (class, readonly) long long scrollerLayoutDirection;

@property (weak) NSScrollView *scrollView;
@property (weak) id<NSScrollerImpPairDelegate> delegate;
@property (retain) NSScrollerImp *verticalScrollerImp;
@property (retain) NSScrollerImp *horizontalScrollerImp;
@property (getter=isFlipped) BOOL flipped;
@property long long scrollerStyle;
@property long long scrollerKnobStyle;
@property (readonly) BOOL overlayScrollersShown;
@property (readonly, getter=isInScrollGesture) BOOL inScrollGesture;

+ (void)initialize;
+ (void)_scrollerStyleRecommendationChanged:(id)a0;
+ (void)_updateAllScrollerImpPairsForNewRecommendedScrollerStyle:(long long)a0;
+ (void)setSuppressScrollerFlash:(BOOL)a0 forDecendantsOfView:(id)a1;
+ (void)setSuppressScrollerFlash:(BOOL)a0 forDescendantsOfView:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addRemoveTrackingAreasAsNeeded;
- (void)_cancelOverlayScrollerHideTimer;
- (void)contentAreaScrolledInDirection:(struct CGPoint { double x0; double x1; })a0;
- (void)_overlayScrollerHideTimerFired:(id)a0;
- (BOOL)inScrollGesture;
- (void)startLiveResize;
- (void)windowOrderedIn;
- (void)_beginHideOverlayScrollers;
- (void)_endScrollGestureWithCancel:(BOOL)a0;
- (void)_flashScrollersIfNewlyVisible;
- (void)_rescheduleOverlayScrollerHideTimerWithDelay:(double)a0;
- (void)_setOverlayScrollerState:(unsigned long long)a0 forScrollerImp:(id)a1 forceImmediately:(BOOL)a2;
- (void)_updateOverlayScrollersStateWithReason:(id)a0 forceAtLeastKnobsVisible:(BOOL)a1;
- (void)_updateOverlayScrollersStateWithReason:(id)a0 forcingVisibilityForHorizontalKnob:(long long)a1 verticalKnob:(long long)a2;
- (void)beginScrollGesture;
- (void)cancelScrollGesture;
- (void)contentAreaDidHide;
- (void)contentAreaDidResize;
- (void)contentAreaDidUnhide;
- (void)contentAreaScrolled;
- (void)contentAreaWillDraw;
- (void)endLiveResize;
- (void)endScrollGesture;
- (void)endTrackingInScrollerImp:(id)a0;
- (void)flashScrollers;
- (void)hideOverlayScrollers;
- (void)lockOverlayScrollerState:(unsigned long long)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseEnteredContentArea;
- (void)mouseExited:(id)a0;
- (void)mouseExitedContentArea;
- (void)mouseMoved:(id)a0;
- (void)mouseMovedInContentArea;
- (void)movedToNewWindow;
- (BOOL)overlayScrollerStateIsLocked;
- (void)removedFromSuperview;
- (void)unlockOverlayScrollerState;
- (void)updateTrackingAreas;
- (void)windowOrderedOut;

@end
