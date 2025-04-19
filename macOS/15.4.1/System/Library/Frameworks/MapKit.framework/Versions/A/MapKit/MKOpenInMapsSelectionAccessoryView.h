@class NSURL, NSColor;

@interface MKOpenInMapsSelectionAccessoryView : MKSelectionAccessoryView {
    NSURL *_url;
    NSColor *_bgColor;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)layout;
- (void)viewDidChangeEffectiveAppearance;
- (id)_createButton;
- (void)_handlePress;
- (void)_updateLayerColor;

@end
