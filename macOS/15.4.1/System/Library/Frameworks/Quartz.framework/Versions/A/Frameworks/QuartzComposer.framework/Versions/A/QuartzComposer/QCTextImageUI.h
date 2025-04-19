@class NSMatrix, NSPopUpButton;

@interface QCTextImageUI : QCInspector {
    NSMatrix *layoutMatrix;
    NSPopUpButton *fontMenu;
    NSPopUpButton *alignmentHMenu;
    NSPopUpButton *alignmentVMenu;
}

+ (id)viewNibName;

- (void)_updateText:(id)a0;
- (void)didLoadNib;
- (void)setupViewForPatch:(id)a0;
- (void)updateAttributes:(id)a0;
- (void)updateFont:(id)a0;
- (void)updateLayout:(id)a0;

@end
