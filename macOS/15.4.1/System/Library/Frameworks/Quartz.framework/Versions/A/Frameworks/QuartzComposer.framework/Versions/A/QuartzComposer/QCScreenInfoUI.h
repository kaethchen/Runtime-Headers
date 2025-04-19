@class NSButton;

@interface QCScreenInfoUI : QCInspector {
    NSButton *fullButton;
}

+ (id)viewNibName;

- (void)update:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
