@class NSButton, NSWindow, NSTextField;

@interface _MOMediaViewLayoutPresetNamingWindowController : NSWindowController {
    NSButton *_acceptButton;
    NSButton *_cancelButton;
    NSTextField *_nameTextField;
    NSWindow *_presentingWindow;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isWindowLoaded;
- (void)loadWindow;
- (id)userProvidedNameForOperation:(id)a0 withSuggestedName:(id)a1 disallowedNames:(id)a2;
- (id)_createWindowButtonWithTitle:(id)a0;
- (void)_respondToButton:(id)a0;

@end
