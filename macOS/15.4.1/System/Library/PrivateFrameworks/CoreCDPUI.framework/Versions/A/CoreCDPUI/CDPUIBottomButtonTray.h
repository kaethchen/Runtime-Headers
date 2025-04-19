@class NSButton, NSProgressIndicator;
@protocol CDPUIBottomButtonTrayDelegate;

@interface CDPUIBottomButtonTray : NSView {
    NSButton *_primaryButton;
    NSButton *_secondaryButton;
    NSButton *_tertiaryLinkButton;
    NSProgressIndicator *_spinner;
    id<CDPUIBottomButtonTrayDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)setPrimaryButtonEnabled:(BOOL)a0;
- (void)startSpinner;
- (void)_primaryButtonTriggered:(id)a0;
- (void)_secondaryButtonTriggered:(id)a0;
- (void)_tertiaryLinkButtonTriggered:(id)a0;
- (void)endSpinner;
- (id)initWithPrimaryButtonTitle:(id)a0 secondaryButtonTitle:(id)a1 tertiaryLinkButtonTitle:(id)a2 delegate:(id)a3;

@end
