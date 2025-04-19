@class NSPressGestureRecognizer;

@interface PXNSSlowMotionEditor : PXSlowMotionEditor

@property (retain, nonatomic) NSPressGestureRecognizer *pressGesture;

+ (id)handleImage;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePress:(id)a0;
- (void)_PXNSSlowMotionEditor_commonInit;
- (void)_handleBeginGesture:(id)a0;
- (void)_handleChangeGesture:(id)a0;
- (void)_handleEndGesture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backingAlignedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)impactOccured;

@end
