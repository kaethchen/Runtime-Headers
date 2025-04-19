@class CATextLayer, NSString, AXVBorderedLayer, NSColor;

@interface AXVBorderedView : NSView

@property (retain, nonatomic) CATextLayer *_labelTextLayer;
@property (retain, nonatomic) AXVBorderedLayer *_borderedLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderThickness;
@property (nonatomic) double highlightRatio;
@property (copy, nonatomic) NSColor *borderColor;
@property (copy, nonatomic) NSColor *highlightColor;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_idealFrameSizeToFitLabelOnOneLine;
- (void)_updateBorderShapeLayers;

@end
