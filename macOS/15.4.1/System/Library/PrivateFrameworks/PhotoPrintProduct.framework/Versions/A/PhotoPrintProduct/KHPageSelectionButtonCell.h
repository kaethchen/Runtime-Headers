@class NSColor;

@interface KHPageSelectionButtonCell : NSButtonCell

@property (retain, nonatomic) NSColor *selectedBackgroundColor;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSColor *selectedTextColor;

- (void)dealloc;
- (id)init;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
