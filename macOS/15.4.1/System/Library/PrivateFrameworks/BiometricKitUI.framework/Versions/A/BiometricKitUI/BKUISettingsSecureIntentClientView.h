@class NSTextField, BKMesaSecureIntentProvider, NSImage, NSView, NSString, BKUIDeviceImageView, NSButton;

@interface BKUISettingsSecureIntentClientView : OBTemplateView <CALayerDelegate, SecureIntentClientView>

@property (retain, nonatomic) BKUIDeviceImageView *mesaEnrollTutorDeviceView;
@property (retain, nonatomic) NSImage *deviceImage;
@property (retain, nonatomic) NSTextField *securePromptMessageTitle;
@property (retain, nonatomic) NSTextField *securePromptMessageSubTitle;
@property (retain, nonatomic) NSView *mesaEnrollTextContainer;
@property (retain, nonatomic) NSButton *cancelButton;
@property (nonatomic) BOOL inDemo;
@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;
+ (struct CGSize { double x0; double x1; })_BKUIContentSize;
+ (id)instanceForDemo:(BOOL)a0;

- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)_isJ773g;
- (BOOL)_isJ773s;
- (BOOL)_isMacStudio;
- (void)_setupLabel:(id)a0;
- (id)initInDemo:(BOOL)a0;
- (void)layoutSecureIntentEnrollTextContainer;
- (void)layoutSecureIntentImageView;
- (BOOL)shouldShowRightImageLayoutForMacMinis;
- (void)showInitialUI;
- (void)showRetryOnErrorUI;

@end
