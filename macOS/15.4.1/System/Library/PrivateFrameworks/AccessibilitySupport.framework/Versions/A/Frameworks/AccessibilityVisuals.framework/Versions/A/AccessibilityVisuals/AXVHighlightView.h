@class NSColor;

@interface AXVHighlightView : AXVView

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) BOOL frameSpansAllScreens;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
