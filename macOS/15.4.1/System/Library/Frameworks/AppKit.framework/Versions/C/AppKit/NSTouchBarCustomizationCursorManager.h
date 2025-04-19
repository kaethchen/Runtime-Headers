@protocol NSTouchBarCustomizationCursorManagerDelegate;

@interface NSTouchBarCustomizationCursorManager : NSObject {
    id _eventTracker;
    struct CGPoint { double x; double y; } _touchBarCursorPosition;
    long long _trackCount;
    int _displayID;
}

@property (weak) id<NSTouchBarCustomizationCursorManagerDelegate> delegate;
@property (readonly) BOOL cursorIsInTouchBar;

+ (void)_hideCursor;
+ (void)_showCursor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_enterTouchBarWithDisplayLocation:(struct CGPoint { double x0; double x1; })a0 mouseIsDown:(BOOL)a1;
- (void)_exitTouchBarWithDFRLocation:(struct CGPoint { double x0; double x1; })a0 cancelled:(BOOL)a1;
- (void)beginTrackingCursor;
- (id)initWithAssociatedDisplay:(int)a0;
- (void)stopTrackingCursor;
- (BOOL)updateWithEvent:(id)a0;

@end
