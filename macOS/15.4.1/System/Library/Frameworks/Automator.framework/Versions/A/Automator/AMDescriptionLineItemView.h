@class NSTextField;

@interface AMDescriptionLineItemView : NSView

@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSTextField *value;

+ (id)labelFont;
+ (id)labelsForKeys;
+ (double)maxLabelWidth;
+ (id)valueFont;

- (void)dealloc;
- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setValueString:(id)a0;
- (void)setLabelKey:(id)a0;

@end
