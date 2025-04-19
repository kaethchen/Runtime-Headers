@class NSImageView, NSTextField, NSPanel, NSButton, NSURLAuthenticationChallenge;

@interface WebAuthenticationPanel : NSObject {
    NSTextField *mainLabel;
    NSPanel *panel;
    NSTextField *password;
    NSTextField *smallLabel;
    NSTextField *username;
    NSImageView *imageView;
    NSButton *remember;
    NSTextField *separateRealmLabel;
    BOOL nibLoaded;
    BOOL usingSheet;
    id callback;
    SEL selector;
    NSURLAuthenticationChallenge *challenge;
}

- (void)dealloc;
- (void)cancel:(id)a0;
- (BOOL)loadNib;
- (void)sheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (id)initWithCallback:(id)a0 selector:(SEL)a1;
- (void)logIn:(id)a0;
- (void)runAsModalDialogWithChallenge:(id)a0;
- (void)runAsSheetOnWindow:(id)a0 withChallenge:(id)a1;
- (void)setUpForChallenge:(id)a0;

@end
