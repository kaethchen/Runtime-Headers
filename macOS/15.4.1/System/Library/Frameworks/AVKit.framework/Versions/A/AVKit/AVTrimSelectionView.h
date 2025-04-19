@class NSImage;

@interface AVTrimSelectionView : NSView {
    NSImage *_selectionImage;
    unsigned long long _trimViewStyle;
}

@property unsigned long long trimViewStyle;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSelectionImage;

@end
