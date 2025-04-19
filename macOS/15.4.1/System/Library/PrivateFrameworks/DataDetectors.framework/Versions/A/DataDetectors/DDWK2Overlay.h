@class NSArray, DDBasicHighlightsView, NSMutableSet, NSMapTable, NSMutableArray;
@protocol DDHighlightsDelegate, DDHighlightsDataSource;

@interface DDWK2Overlay : NSObject {
    struct OpaqueWKBundlePageOverlay { } *_overlay;
    struct OpaqueWKBundlePage { } *_clientPage;
    NSArray *_highlightedObjects;
    NSMapTable *_objectsToArrowlessViewMapping;
    NSMutableArray *_highlightQueue;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleRect;
    BOOL _alwaysShowHighlights;
    BOOL _relayoutInProgress;
    BOOL _needsLayout;
}

@property (weak) id<DDHighlightsDelegate> delegate;
@property (weak) id<DDHighlightsDataSource> dataSource;
@property (retain) NSMutableArray *subviews;
@property (retain) NSMutableSet *trackingAreas;
@property (retain) NSMutableSet *enteredTrackingAreas;
@property (retain) DDBasicHighlightsView *clickedView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addSubview:(id)a0;
- (void)deactivate;
- (void)mouseEntered:(id)a0;
- (void)removeTrackingArea:(id)a0;
- (id)hitView;
- (void)recomputeLayout;
- (void)willMoveToPage:(struct OpaqueWKBundlePage { } *)a0;
- (void)_addMultiViewForObject:(id)a0 withArrow:(BOOL)a1 availableViews:(id)a2;
- (void)_mouseEnteredBasicHLView:(id)a0 withRelatedObjects:(id)a1;
- (void)_mouseExitedBasicHLView:(id)a0 withInfos:(id)a1;
- (void)_setTrackingAreaForBasicHighlight:(id)a0 entering:(BOOL)a1 ignoreCleanup:(BOOL)a2;
- (BOOL)accessibilityDataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityDataDetectorTypeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityShowDataDetectorMenuAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)actionContextForResultAtPoint:(struct WKPoint { double x0; double x1; })a0 rangeHandle:(const struct OpaqueWKBundleRangeHandle **)a1;
- (void)addTrackingArea:(id)a0 alreadyInside:(BOOL)a1;
- (void)didMoveToPage:(struct OpaqueWKBundlePage { } *)a0;
- (void)drawDirtyRect:(struct WKRect { struct WKPoint { double x0; double x1; } x0; struct WKSize { double x0; double x1; } x1; })a0 inContext:(void *)a1;
- (void)handleMouseClick:(BOOL)a0 onTriangle:(BOOL)a1 onView:(id)a2;
- (void)hideHighlights;
- (void)installInPage:(struct OpaqueWKBundlePage { } *)a0;
- (BOOL)mouseDownAt:(struct WKPoint { double x0; double x1; })a0 button:(int)a1;
- (BOOL)mouseDraggedTo:(struct WKPoint { double x0; double x1; })a0 button:(int)a1;
- (void)mouseExited:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)mouseMovedTo:(struct WKPoint { double x0; double x1; })a0;
- (BOOL)mouseUpAt:(struct WKPoint { double x0; double x1; })a0 button:(int)a1;
- (void)reloadHighlights;
- (void)removeAllTrackingAreas;
- (void)removeHighlights;
- (void)setAllState:(int)a0 disableAnimations:(BOOL)a1;
- (void)setHighlightedObjects:(id)a0;
- (void)setNeedsRelayout;
- (void)setState:(int)a0 forHighlightView:(id)a1 disableAnimation:(BOOL)a2;
- (void)switchOffHighlights;
- (void)updateHighlightStatesForMousePosition;

@end
