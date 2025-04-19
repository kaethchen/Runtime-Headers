@class NSString, KHTextView, CAShapeLayer;

@interface KHMapAnnotationView : MKAnnotationView <CAAnimationDelegate, NSTextViewDelegate>

@property (retain) CAShapeLayer *annotationDot;
@property struct CGPoint { double x; double y; } startPoint;
@property unsigned long long keyFrame;
@property (readonly, nonatomic) BOOL editable;
@property (retain) NSString *stringValue;
@property (retain) KHTextView *label;
@property (nonatomic) unsigned long long dragState;
@property int mapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)resignFirstResponder;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLabel;
- (void)setLabelText:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_animateDotLiftAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_animateDotWithKeyFrameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 duration:(double)a1;
- (struct CGPath { } *)_dotPathCreateForKeyFrame:(unsigned long long)a0 scale:(double)a1;
- (void)_setupAnnotationDotAttributesAtScale:(double)a0;
- (void)_setupAnnotationLabelAttributesAtScale:(double)a0;
- (void)_updateUIForSelection;
- (void)labelFrameChanged:(id)a0;
- (void)renderInContext:(struct CGContext { } *)a0 environment:(id)a1 withSnapshot:(id)a2 scale:(double)a3;
- (void)showAtPoint:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)showWithText:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)updateTitleColorForMapType:(int)a0;

@end
