@class NSTextField, NSBox, NSView, NSProgressIndicator, NSTimer, PXAssistantTemplateView, NSButton;

@interface PXAssistantTemplateContainerViewController : NSViewController

@property (readonly, nonatomic) NSView *templateContainerView;
@property (readonly, nonatomic) NSView *buttonTray;
@property (readonly, nonatomic) NSBox *divider;
@property (readonly, nonatomic) NSProgressIndicator *spinner;
@property (readonly, nonatomic) NSTimer *spinnerDisplayTimer;
@property (readonly, nonatomic) NSTextField *statusLabel;
@property (nonatomic, getter=areControlsEnabled) BOOL controlsEnabled;
@property (nonatomic, getter=isSpinnerVisible) BOOL spinnerVisible;
@property (retain, nonatomic) PXAssistantTemplateView *templateView;
@property (readonly, nonatomic) NSButton *firstButton;
@property (readonly, nonatomic) NSButton *secondButton;
@property (readonly, nonatomic) NSButton *linkButton;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateProgress:(double)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)disableControlsWithStatus:(id)a0 showingSpinnerAfter:(double)a1;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (void)_placeTemplateView;
- (void)enableControls;

@end
