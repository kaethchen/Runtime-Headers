@class NSImage;

@interface SPRoundedWindow : NSWindow {
    NSImage *_cornerMaskImage;
}

- (void).cxx_destruct;
- (id)_cornerMask;
- (id)accessibilityIdentifier;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;

@end
