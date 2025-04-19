@class AXFScreen, NSString;

@interface AXKScreenCursorManager : NSObject <AXEEventTapListener, AXFScreenManagerObserving>

@property (class, readonly, nonatomic) AXKScreenCursorManager *shared;

@property (nonatomic) BOOL _trackingIndividualScreenCursor;
@property (retain, nonatomic) AXFScreen *_previousCursorScreen;
@property (nonatomic) struct CGPoint { double x; double y; } _previousCursorLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)eventTapManager:(id)a0 passivelyTappedMouseEvent:(id)a1 withProxy:(struct __CGEventTapProxy { } *)a2;
- (void)screenManager:(id)a0 screensChanged:(id)a1;
- (id)_getDisplayLastCursorDicitonary;
- (void)_clearAllSavedScreenCursorLocation;
- (struct CGPoint { double x0; double x1; })_getLastCursorLocationForScreen:(id)a0;
- (id)_screenInScreens:(id)a0 closestToPoint:(struct CGPoint { double x0; double x1; })a1 horizontally:(BOOL)a2;
- (void)_setLastCursorLocation:(struct CGPoint { double x0; double x1; })a0 forScreen:(id)a1;
- (void)endAutoTrackingIndividualScreenCursor;
- (BOOL)moveCursorToScreen:(id)a0;
- (id)nextScreenAfterScreen:(id)a0;
- (void)saveCursorLocation:(struct CGPoint { double x0; double x1; })a0 forScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })savedCursorLocationForScreen:(id)a0;
- (id)screenAboveScreen:(id)a0 closestToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)screenBelowScreen:(id)a0 closestToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)screenLeftOfScreen:(id)a0 closestToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)screenRightOfScreen:(id)a0 closestToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)startAutoTrackingIndividualScreenCursor;

@end
