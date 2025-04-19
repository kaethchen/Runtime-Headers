@class NSView, NSButton, SOCommandEditingViewController;

@interface SOCommandCreationWindowController : NSWindowController {
    NSView *_editingViewContainer;
    NSButton *_saveButton;
    SOCommandEditingViewController *_editingViewController;
}

+ (id)newCommandCreationWindowController;

- (void)dealloc;
- (void)cancel:(id)a0;
- (void)save:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)editingStateDidChange;
- (void)_installEditingView;
- (void)showCommandCreationWindowForAppPID:(int)a0 nounSpecifiers:(id)a1;
- (void)updatePropertiesForClient:(id)a0;

@end
