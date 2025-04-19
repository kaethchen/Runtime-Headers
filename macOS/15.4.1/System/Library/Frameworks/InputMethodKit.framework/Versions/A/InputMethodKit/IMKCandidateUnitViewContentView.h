@class NSColor;

@interface IMKCandidateUnitViewContentView : IMKUIView

@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) BOOL drawsBackgroundColor;

- (void)dealloc;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)scrubbed:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)shouldUpdateForPressAndHold:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 with:(long long)a2;
- (void)tapped:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)touchesEnded:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;

@end
