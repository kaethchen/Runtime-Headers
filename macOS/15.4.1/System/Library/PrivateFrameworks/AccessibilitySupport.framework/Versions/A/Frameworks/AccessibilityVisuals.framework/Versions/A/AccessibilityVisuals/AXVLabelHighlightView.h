@class NSString, NSColor, NSTextField;

@interface AXVLabelHighlightView : AXVHighlightView

@property (retain, nonatomic) NSTextField *_labelTextField;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSColor *labelColor;

- (void).cxx_destruct;
- (id)initWithFrameOfElementToLabel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1;

@end
