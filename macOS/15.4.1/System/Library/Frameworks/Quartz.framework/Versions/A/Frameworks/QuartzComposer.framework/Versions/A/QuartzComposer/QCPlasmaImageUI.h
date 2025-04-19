@class NSTextField;

@interface QCPlasmaImageUI : QCInspector {
    NSTextField *widthField;
    NSTextField *heightField;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateSize:(id)a0;

@end
