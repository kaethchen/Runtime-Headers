@class IMKCandidateStepperAccessoryImageView;
@protocol IMKCandidateStepperViewDelegate;

@interface IMKCandidateStepperView : IMKUIView

@property (retain, nonatomic) IMKCandidateStepperAccessoryImageView *topArrowView;
@property (retain, nonatomic) IMKCandidateStepperAccessoryImageView *bottomArrowView;
@property (nonatomic) BOOL initialized;
@property (nonatomic) id<IMKCandidateStepperViewDelegate> delegate;

- (void)dealloc;
- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomArrowRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeArrowFrames;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 properties:(id)a1;
- (void)setBottomStepperState:(BOOL)a0;
- (void)setTopStepperState:(BOOL)a0;
- (void)setupArrows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stepperAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topArrowRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
