@class AXVBorderedView, NSColor;

@interface AXVBorderedWindow : AXVWindow

@property (retain, nonatomic) AXVBorderedView *_customBorderedView;
@property (nonatomic) unsigned long long borderStyle;
@property (nonatomic) double borderThickness;
@property (copy, nonatomic) NSColor *borderColor;
@property (nonatomic) double highlightRatio;
@property (copy, nonatomic) NSColor *highlightColor;
@property (copy, nonatomic) NSColor *fillColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderedFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } borderedFrameCenter;
@property (nonatomic) struct CGSize { double x0; double x1; } borderedFrameSize;

+ (id)keyPathsForValuesAffectingBorderedFrame;
+ (id)keyPathsForValuesAffectingBorderedFrameCenter;
+ (id)keyPathsForValuesAffectingBorderedFrameSize;

- (id)init;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_borderedFrameFromWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBorderedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBorderedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
