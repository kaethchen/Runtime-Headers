@class NSString, NSProgressIndicator, NSButton, NSStackView;

@interface AMPModalDialogFooterLockup : AMPBindableView

@property (retain, nonatomic) NSButton *defaultButton;
@property (retain, nonatomic) NSStackView *primaryStack;
@property (retain, nonatomic) NSStackView *secondaryStack;
@property (retain, nonatomic) NSString *cachedTitle;
@property (retain, nonatomic) NSProgressIndicator *spinner;

- (void).cxx_destruct;
- (void)showSpinner:(BOOL)a0;
- (void)addPrimaryButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (void)addSecondaryButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (id)initWithDefaultTitle:(id)a0 actionBlock:(id /* block */)a1;
- (void)reflectButton:(id)a0;

@end
