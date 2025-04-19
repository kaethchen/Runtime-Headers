@class NSPopUpButton, QCProgrammablePatchView, NSTabView;

@interface QCOpenCLUI : QCInspector {
    QCProgrammablePatchView *sourceView;
    NSTabView *tabView;
    NSPopUpButton *kernelNames;
    NSPopUpButton *functionNames;
    BOOL _private;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedFrame;
    struct CGSize { double width; double height; } _savedMaxSize;
    struct CGSize { double width; double height; } _savedMinSize;
}

+ (id)viewNibName;

- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (BOOL)settingsVisible;
- (void)_updateUI;
- (void)didLoadNib;
- (void)moveToLine:(id)a0;
- (void)resetView;
- (void)sampleKernel:(id)a0;
- (void)setSettingsVisible:(BOOL)a0;
- (void)setupViewForPatch:(id)a0;

@end
