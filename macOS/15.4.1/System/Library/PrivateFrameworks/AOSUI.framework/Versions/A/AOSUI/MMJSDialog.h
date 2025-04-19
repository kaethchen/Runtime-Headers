@class NSTextField, NSImageView, NSArray, NSProgressIndicator, NSLayoutConstraint, NSButton, NSWindow;

@interface MMJSDialog : NSObject {
    id /* block */ _completionHandler;
}

@property (retain) NSWindow *dialogSheet;
@property (weak) NSImageView *iconView;
@property (weak) NSTextField *titleField;
@property (weak) NSTextField *messageField;
@property (weak) NSButton *defaultButton;
@property (weak) NSButton *alternateButton;
@property (weak) NSProgressIndicator *progressSpinner;
@property (weak) NSLayoutConstraint *buttonsHSpacingConstraint;
@property (weak) NSLayoutConstraint *spinnerToAlternateSpacingConstraint;
@property (weak) NSLayoutConstraint *buttonsBaselineConstraint;
@property (retain) NSArray *spinnerToDefaultSpacingConstraints;

- (id)init;
- (void).cxx_destruct;
- (void)setDefaultButtonTitle:(id)a0;
- (void)setIcon:(id)a0;
- (void)setAlternateButtonTitle:(id)a0;
- (void)buttonClicked:(id)a0;
- (void)closeModalSheetForParentWindow:(id)a0;
- (void)beginModalSheetWithParentWindow:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 alternateButtonTitle:(id)a4 completionHandler:(id /* block */)a5;

@end
