@class NSButton, NSTextField, NSPopUpButton;

@interface QCDateFormatterUI : QCInspector {
    NSButton *zoneButton;
    NSPopUpButton *zoneMenu;
    NSPopUpButton *dateMenu;
    NSPopUpButton *timeMenu;
    NSTextField *formatField;
}

+ (id)viewNibName;

- (void)update:(id)a0;
- (void)_configureFormatEditor;
- (void)didLoadNib;
- (void)setupViewForPatch:(id)a0;

@end
