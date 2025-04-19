@class NSTextField;

@interface SONativeTextTranscriptBalloonView : SONativeTranscriptBalloonView

@property (readonly) NSTextField *textField;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMaximumWidth:(double)a0;
- (void)_setBalloonText:(id)a0;
- (void)setBalloonAttributedString:(id)a0 gradientReferenceView:(id)a1 balloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a2;
- (void)sizeToFitWithMaximumWidth:(double)a0;

@end
