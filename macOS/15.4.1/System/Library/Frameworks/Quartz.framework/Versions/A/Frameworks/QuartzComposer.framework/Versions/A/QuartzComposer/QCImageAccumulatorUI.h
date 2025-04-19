@class NSButton, NSPopUpButton;

@interface QCImageAccumulatorUI : QCInspector {
    NSPopUpButton *formatMenu;
    NSButton *continuousButton;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateContinuous:(id)a0;
- (void)updateFormat:(id)a0;

@end
