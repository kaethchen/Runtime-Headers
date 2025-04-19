@class NSPopUpButton;

@interface QCBillboardUI : QCInspector {
    NSPopUpButton *scaleMenu;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateScale:(id)a0;

@end
