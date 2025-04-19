@interface _TtC7SwiftUIP33_7EDEE3BC9F04CB7860AD83774DB9034623EditTrackingStepperCell : NSStepperCell

- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;

@end
