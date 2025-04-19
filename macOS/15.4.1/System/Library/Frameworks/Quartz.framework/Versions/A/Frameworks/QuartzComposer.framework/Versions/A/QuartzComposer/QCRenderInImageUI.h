@class NSButton, NSPopUpButton;

@interface QCRenderInImageUI : QCInspector {
    NSPopUpButton *formatMenu;
    NSButton *depthButton;
    NSButton *feedbackButton;
}

+ (id)viewNibName;

- (void)updateFeedback:(id)a0;
- (void)setupViewForPatch:(id)a0;
- (void)updateDepth:(id)a0;
- (void)updateFormat:(id)a0;

@end
