@protocol NSTouchBarPressAndHoldTransposerDelegate;

@interface NSTouchBarPressAndHoldTransposer : NSObject {
    id _trackingTouchID;
    BOOL _transposingTouches;
}

@property (readonly) double initialXLocation;
@property (readonly) double minimumRequiredDistance;
@property (weak) id<NSTouchBarPressAndHoldTransposerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)transposeTouch:(id)a0;
- (BOOL)transposeEvent:(id)a0;
- (void)beginTransposingWithTouch:(id)a0;
- (id)initWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationContentView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)touchCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)touchEnded:(id)a0 withEvent:(id)a1;

@end
