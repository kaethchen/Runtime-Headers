@class AudioBox, NSTextField, NSBundle, NSButton;

@interface AMSNetworkInfoView : NSView {
    NSButton *infoButton;
    NSTextField *deviceInfoLabel;
    NSTextField *serialLabel;
    NSTextField *firmwareLabel;
    NSTextField *deviceNameField;
    NSTextField *serialNumberField;
    NSTextField *firmwareField;
    NSTextField *noSelectionLabel;
    AudioBox *box;
    NSBundle *currentBundle;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFromSuperview;
- (void)displayInfoForAudioBox:(id)a0;

@end
