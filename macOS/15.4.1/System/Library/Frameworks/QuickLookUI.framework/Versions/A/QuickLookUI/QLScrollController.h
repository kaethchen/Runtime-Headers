@class NSScrollerImpPair, NSString, NSView, NSTrackingArea, CALayer, QLScrollerLayer;
@protocol QLScrollControllerDelegate;

@interface QLScrollController : NSObject <CALayerDelegate, NSScrollerImpPairDelegate, QLScrollerDelegate> {
    NSScrollerImpPair *_scrollerImpPair;
    QLScrollerLayer *_verticalScroller;
    QLScrollerLayer *_horizontalScroller;
    NSTrackingArea *_trackingArea;
}

@property (weak) NSView *view;
@property (weak) CALayer *hostingLayer;
@property (readonly, getter=isActive) BOOL active;
@property (weak) id<QLScrollControllerDelegate> delegate;
@property (readonly) QLScrollerLayer *verticalScroller;
@property (readonly) QLScrollerLayer *horizontalScroller;
@property unsigned long long controlSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scrollControllerForView:(id)a0 hostingLayer:(id)a1;

- (void).cxx_destruct;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)inLiveResizeForScrollerImpPair:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAreaRectForScrollerImpPair:(id)a0;
- (void)deactivate;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (struct CGPoint { double x0; double x1; })mouseLocationInContentAreaForScrollerImpPair:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollerImpPair:(id)a0 convertContentPoint:(struct CGPoint { double x0; double x1; })a1 toScrollerImp:(id)a2;
- (void)scrollerImpPair:(id)a0 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)a1;
- (void)scrollerImpPair:(id)a0 setContentAreaNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setupScrollers;
- (BOOL)_hasHorizontalScrolling;
- (BOOL)_hasVerticalScrolling;
- (void)_teardownScrollers;
- (void)_updateScrollerVisibility;
- (double)pageScrollPercentageForScroller:(id)a0;
- (struct CGPoint { double x0; double x1; })scroller:(id)a0 localPointFromEvent:(id)a1;
- (id)scrollerAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollerDidEndTracking:(id)a0;
- (void)scrollerDidScroll:(id)a0;
- (void)viewDidResize:(id)a0;

@end
