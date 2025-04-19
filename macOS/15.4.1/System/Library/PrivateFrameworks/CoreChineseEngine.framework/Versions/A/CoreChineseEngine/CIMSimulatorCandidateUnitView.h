@class NSString, NSAttributedString, NSColor;

@interface CIMSimulatorCandidateUnitView : NSView

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedStringValue;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *backgroundBorderColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;

@end
