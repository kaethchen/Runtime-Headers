@class NSView, NSString, NSArray, NSMapTable, NSStackView, NSColor, NSImageView, _LAUIAuthenticationLabel, NSButton;

@interface _LAUIAuthenticationAlertVC : NSViewController <_LAUIAuthenticationAlert> {
    NSStackView *_stackView;
    NSImageView *_iconView;
    _LAUIAuthenticationLabel *_titleTextField;
    _LAUIAuthenticationLabel *_informativeTextField;
    NSView *_buttonStackContainer;
    NSStackView *_buttonStack;
    NSArray *_buttons;
    NSButton *_buttonPositive;
    NSButton *_buttonPositivePlain;
    NSButton *_buttonNegative;
    NSButton *_buttonAlternative;
    NSView *_accessoryViewContainer;
    NSView *_accessoryView;
    BOOL _enabled;
    NSMapTable *_inactiveControls;
    NSView *_lastFirstResponder;
}

@property (copy) NSString *title;
@property (copy) NSColor *titleColor;
@property (retain, nonatomic) NSString *titleTooltip;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL useCustomTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setButton:(unsigned long long)a0 enabled:(BOOL)a1;
- (void)setup;
- (void)_updateTouchBar;
- (BOOL)isButtonHidden:(unsigned long long)a0;
- (void)showButton:(unsigned long long)a0 title:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)_assertButtonIndexIsValid:(unsigned long long)a0;
- (void)_configureAccessoryStackView:(id)a0;
- (void)_configurePaddingForLabel:(id)a0;
- (void)_configurePopUp:(id)a0;
- (void)_configureSecureTextField:(id)a0;
- (void)_configureTextField:(id)a0;
- (void)_restoreCurrentFirstResponder;
- (void)_saveCurrentFirstResponder;
- (void)_updateButtonStack;
- (void)hideButton:(unsigned long long)a0;
- (id)positiveButtonIn:(id)a0;
- (void)resolveAccessoryViewHidden;
- (void)setIcon:(id)a0 badge:(id)a1;

@end
