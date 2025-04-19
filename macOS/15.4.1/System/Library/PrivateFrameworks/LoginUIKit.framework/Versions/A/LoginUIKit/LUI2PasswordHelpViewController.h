@class NSTextField, NSView, NSArray, NSLayoutGuide, NSString, NSStackView, NSButton, NSBox;

@interface LUI2PasswordHelpViewController : LUI2ViewController <CABackdropLayerDelegate, CALayerDelegate>

@property (retain) NSView *backgroundEffectsView;
@property NSStackView *helpContainer;
@property NSView *resetContainer;
@property NSView *resetTitle;
@property NSButton *resetUsingAppleIDButton;
@property NSButton *resetUsingRecoveryButton;
@property NSBox *line;
@property NSView *hintContainer;
@property NSView *hintTitle;
@property NSTextField *hintTextField;
@property (retain) NSArray *layoutAlignmentGuideConstraints;
@property (nonatomic) BOOL resetUsingAppleIDButtonHidden;
@property (nonatomic) BOOL resetUsingRecoveryButtonHidden;
@property (readonly) NSLayoutGuide *layoutAlignmentGuide;
@property (retain, nonatomic) NSString *passwordHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)setResetUsingAppleIDButtonTarget:(id)a0 action:(SEL)a1;
- (void)setResetUsingRecoveryButtonTarget:(id)a0 action:(SEL)a1;

@end
