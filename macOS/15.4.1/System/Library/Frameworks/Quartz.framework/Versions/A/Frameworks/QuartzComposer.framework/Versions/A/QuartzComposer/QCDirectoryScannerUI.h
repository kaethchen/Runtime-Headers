@class NSButton, NSPopUpButton;

@interface QCDirectoryScannerUI : QCInspector {
    NSButton *recursiveButton;
    NSPopUpButton *typeMenu;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateRecursive:(id)a0;
- (void)updateType:(id)a0;

@end
