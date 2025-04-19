@class NSColor;

@interface OTTColorView : NSView

@property (retain, nonatomic) NSColor *fillColor;
@property (retain, nonatomic) NSColor *frameColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double frameWidth;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithColors:(id)a0 frame:(id)a1;

@end
