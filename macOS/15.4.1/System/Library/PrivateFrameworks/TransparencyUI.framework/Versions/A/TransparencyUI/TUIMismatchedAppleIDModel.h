@class NSString;

@interface TUIMismatchedAppleIDModel : TUIWelcomeControllerModel {
    NSString *_symbolName;
    NSString *_title;
    NSString *_detailText;
    NSString *_primaryButton;
    NSString *_secondaryButton;
    NSString *_helpLinkTitle;
    NSString *_helpLinkURL;
}

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)symbolName;
- (id)title;
- (id)detailText;
- (void)setSymbolName:(id)a0;
- (void)setDetailText:(id)a0;
- (id)secondaryButton;
- (id)primaryButton;
- (void)setHelpLinkURL:(id)a0;
- (id)helpLinkTitle;
- (id)helpLinkURL;
- (void)setHelpLinkTitle:(id)a0;
- (void)setPrimaryButton:(id)a0;
- (void)setSecondaryButton:(id)a0;
- (id)initWithFlow:(unsigned long long)a0;

@end
