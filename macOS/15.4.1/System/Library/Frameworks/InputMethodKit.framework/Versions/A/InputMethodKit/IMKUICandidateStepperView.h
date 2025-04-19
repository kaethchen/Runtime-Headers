@class NSImageView, IMKUIDelimiter;
@protocol IMKUICandidateStepperViewDelegate;

@interface IMKUICandidateStepperView : NSView

@property (retain, nonatomic) IMKUIDelimiter *delimiter;
@property (retain, nonatomic) NSImageView *topArrowView;
@property (retain, nonatomic) NSImageView *bottomArrowView;
@property (nonatomic) BOOL initialized;
@property (nonatomic) long long alignment;
@property (weak, nonatomic) id<IMKUICandidateStepperViewDelegate> delegate;
@property (nonatomic) double fontPointSize;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomArrowRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeArrowFrames;
- (void)setBottomStepperState:(BOOL)a0;
- (void)setTopStepperState:(BOOL)a0;
- (void)setupArrows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stepperAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topArrowRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
