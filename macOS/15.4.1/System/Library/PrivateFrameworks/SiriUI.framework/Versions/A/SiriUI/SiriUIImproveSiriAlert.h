@class NSButton, NSTextField;

@interface SiriUIImproveSiriAlert : NSWindowController

@property (weak) NSTextField *messageText;
@property (weak) NSTextField *informativeText;
@property (weak) NSButton *aboutLinkButton;
@property (weak) NSButton *firstButton;
@property (weak) NSButton *secondButton;

- (id)init;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)runModal;
- (void)windowDidLoad;
- (void)clickedAboutLink:(id)a0;
- (void)clickedFirstButton:(id)a0;
- (void)clickedSecondButton:(id)a0;
- (void)siriUIBeginModalForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
