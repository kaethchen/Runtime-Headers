@class NSView, NSProgressIndicator, NSTextField, NSTimer, OBTemplateView, OBTemplatePartLinkButton, NSButton, NSBox;

@interface OBTemplateContainerViewController : NSViewController

@property (retain, nonatomic) NSView *templateContainerView;
@property (retain, nonatomic) NSView *buttonTray;
@property (retain, nonatomic) NSBox *divider;
@property (retain, nonatomic) NSButton *firstButton;
@property (retain, nonatomic) NSButton *secondButton;
@property (retain, nonatomic) OBTemplatePartLinkButton *linkButton;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (retain, nonatomic) NSTextField *statusMessage;
@property (retain, nonatomic) NSTimer *spinnerDisplayTimer;
@property (nonatomic, setter=setSpinnerVisible:) BOOL spinnerVisible;
@property (retain, nonatomic) OBTemplateView *templateView;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (id)attributedStatusStringForString:(id)a0;
- (void)disableControlsWithStatus:(id)a0 showingSpinnerAfter:(double)a1;
- (void)hideSpinner;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)makeButtonTray;
- (void)makeDivider;
- (void)setControlsEnabled:(BOOL)a0;
- (void)showSpinnerWithMessage:(id)a0;
- (void)updateButtonConstraints;

@end
