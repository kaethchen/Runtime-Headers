@class NSButton;

@interface QCClearUI : QCInspector {
    NSButton *colorButton;
    NSButton *depthButton;
}

+ (id)viewNibName;

- (void)update:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
