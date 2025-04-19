@class NSColor;

@interface SGTLabelSwatchColorImage : NSImage {
    NSColor *color;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 respectFlipped:(BOOL)a4 hints:(id)a5;
- (id)initWithColor:(id)a0;

@end
