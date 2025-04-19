@class NSColor;

@interface AKToolbarSeparatorItem_Mac : NSView

@property (nonatomic) unsigned long long displayMode;
@property (retain) NSColor *color;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
