@class NSWindow;

@interface _NSTrackingAreaManager : NSObject

@property (class, readonly) Class defaultClass;

@property (readonly) Class viewHelperClass;
@property (weak) NSWindow *window;
@property BOOL allowsCursorRectsWhenInactive;
@property (readonly) BOOL hasValidCursorRects;
@property (readonly) BOOL shouldShowCursorRects;
@property (readonly) BOOL areCursorRectsEnabled;
@property (readonly) BOOL shouldUpdateTrackingAreasDuringScrolling;

+ (void)initialize;
+ (void)_setCursorForCurrentMouseLocation;
+ (void)appKitWillManageEventLoop;
+ (BOOL)areCursorRectsEnabled;
+ (id)convertEventToCursorUpdateIfNeeded:(id)a0;
+ (id)cursorRectCursor;
+ (void)disableCursorRects;
+ (void)discardTrackingAndCursorEventsIfNeeded;
+ (void)enableCursorRects;
+ (void)gdbDumpCursorStack;
+ (BOOL)handleCursorRectEvent:(id)a0;
+ (void)installMenuTrackingObserver;
+ (BOOL)isSpecialMenuTrackingArea:(id)a0;
+ (BOOL)isTrackingIDInstalled:(long long)a0 wid:(long long)a1;
+ (void)resetCursorStack;
+ (void)restoreCursor;
+ (BOOL)routeEnterExitEvent:(id)a0;
+ (void)trackingRegionID:(unsigned long long)a0 windowID:(unsigned int)a1 getTrackingAreaID:(long long *)a2 userData:(void **)a3;
+ (unsigned long long)trackingRegionIDForTrackingAreaID:(long long)a0 wid:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)_startMenuTrackingOfTrackingAreasIfNeeded;
- (void)activateTrackingRectsForApplicationActivation;
- (void)cursorUpdate:(id)a0;
- (void)deactivateTrackingRectsForApplicationDeactivation;
- (void)disableCursorRects;
- (void)disableTrackingArea:(id)a0;
- (void)disableTrackingRect:(long long)a0;
- (void)discardCursorRects;
- (id)discardCursorRectsForView:(id)a0;
- (void)discardEventsForTrackingArea:(id)a0;
- (void)discardTrackingRect:(long long)a0;
- (void)discardTrackingRects:(long long *)a0 count:(long long)a1;
- (void)displayCycleUpdateStructuralRegions;
- (void)enableCursorRects;
- (void)enableTrackingArea:(id)a0;
- (void)enableTrackingRect:(long long)a0;
- (void)gdbDumpCursorRects;
- (BOOL)hasCursorRects;
- (BOOL)hasCursorRectsForView:(id)a0;
- (void)invalidateCursorRectsForView:(id)a0;
- (void)invalidateCursorRectsForView:(id)a0 force:(BOOL)a1;
- (void)invalidateCursorRectsForViewsWithNoTrackingAreas;
- (void)markCursorRectsForRemovedView:(id)a0;
- (void)menuTrackingTrackingAreaEvent:(id)a0 delayedArray:(id)a1;
- (void)moveTrackingArea:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)postInvalidCursorRects;
- (void)recursiveResetTrackingAreasToPending;
- (void)resetCursorRects;
- (BOOL)routeEnterExitEvent:(id)a0;
- (void)setAreCursorRectsEnabled:(BOOL)a0;
- (void)setCursorForMouseLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setTrackingAreasDirty;
- (long long)setTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inside:(BOOL)a1 owner:(id)a2 userData:(void *)a3 useTrackingNum:(long long)a4;
- (void)setTrackingRects;
- (BOOL)shouldDelayEventDuringEventBlockingTransition:(id)a0;
- (BOOL)shouldResetCursorRects;
- (void)synchronizeConfigurationForTrackingArea:(id)a0;
- (long long)trackingAreaIDForTrackingArea:(id)a0;
- (void)updateCursorRectsDueToBecomingKey;
- (void)updateCursorRectsDueToBecomingVisible;
- (void)updateCursorRectsDueToResigningKey;
- (void)updateTrackingAreasDueToEndScrolling;
- (void)verifyTrackingRects;

@end
