@class NSColor, OBPrivacyLinkButton, NSTextField;

@interface OBPrivacyLinkController_macOS : OBPrivacyLinkController {
    NSColor *_iconTintColor;
    NSColor *_textTintColor;
    OBPrivacyLinkButton *_button;
    NSTextField *_caption;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (id)initWithBundleIdentifiers:(id)a0;
- (void)setLinkEnabled:(BOOL)a0;
- (id)initWithPrivacyBundle:(id)a0;
- (void)setIconTintColor:(id)a0;
- (void)setTextTintColor:(id)a0;
- (void)viewPressed:(id)a0;

@end
