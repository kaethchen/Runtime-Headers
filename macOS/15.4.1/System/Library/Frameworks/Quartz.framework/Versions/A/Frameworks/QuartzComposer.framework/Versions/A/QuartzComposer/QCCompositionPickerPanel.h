@interface QCCompositionPickerPanel : NSPanel {
    void *_private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedCompositionPickerPanel;

- (void)close;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didSelectComposition:(id)a0;
- (void)_willSelectComposition:(id)a0;
- (id)compositionPickerView;

@end
