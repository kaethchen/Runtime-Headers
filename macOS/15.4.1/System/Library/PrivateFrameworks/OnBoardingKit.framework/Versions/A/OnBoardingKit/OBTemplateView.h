@class NSStackView, OBAnimationView, NSDictionary, OBTemplatePartLinkButton, NSScrollView, OBPrivacyLinkController, NSImageView, NSButton, NSImage, NSString, NSAttributedString, NSArray, NSView, NSTextField, NSColor;

@interface OBTemplateView : NSView

@property (retain, nonatomic) NSTextField *titleView;
@property (retain, nonatomic) NSTextField *headlineView;
@property (retain, nonatomic) NSView *topContentView;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSTextField *bodyTextView;
@property (retain, nonatomic) NSAttributedString *attributedBodyText;
@property (retain, nonatomic) NSView *privacyLinkView;
@property (retain, nonatomic) NSButton *privacyLinkButton;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (retain, nonatomic) NSArray *privacyBundleIdentifiers;
@property (retain, nonatomic) NSStackView *outerContentStackView;
@property (retain, nonatomic) NSStackView *innerContentStackView;
@property (retain, nonatomic) NSScrollView *innerContentScrollView;
@property (retain, nonatomic) OBTemplatePartLinkButton *linkButton;
@property (retain, nonatomic) NSDictionary *attributesForTitle;
@property (retain, nonatomic) NSDictionary *attributesForHeadline;
@property (nonatomic) long long layoutStyle;
@property BOOL usesLargeContentArea;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) OBAnimationView *animationView;
@property (nonatomic) BOOL updateTextViewToContentPaddingOnTextChange;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *bodyText;
@property (retain, nonatomic) NSString *headline;
@property long long bodyTextAlignment;
@property (retain, nonatomic) NSImage *topImage;
@property (retain, nonatomic) NSString *topImageSymbolName;
@property (retain, nonatomic) NSColor *topImageTintColor;
@property (retain, nonatomic) NSView *topContent;
@property (retain, nonatomic) NSView *contentArea;
@property BOOL needsExtraWideContent;
@property BOOL linkButtonGoesAboveContent;

+ (id)_createTextFieldForBodyText:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)commonInit;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (id)initWithTitle:(id)a0 bodyText:(id)a1 icon:(id)a2 contentLayoutStyle:(long long)a3;
- (id)initWithTitle:(id)a0 bodyText:(id)a1 symbol:(id)a2 contentLayoutStyle:(long long)a3;
- (void)setPrivacyLinkHidden:(BOOL)a0;
- (void)setTopImageHidden:(BOOL)a0;
- (void)_addImageView;
- (id)_attributedStringWithOnlyAllowedAttributesFrom:(id)a0;
- (id)_createImageViewForImage;
- (id)_createImageViewForSymbolImage;
- (void)_createInnerContentContainer;
- (void)_removeImageView;
- (id)_symbolIconForSymbolName:(id)a0 withAccesibilityDescription:(id)a1;
- (void)_updateBodyTextToContentViewPadding:(id)a0;
- (void)addLeadingImageToTemplateTitle:(id)a0 customBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initLargeContentTemplateWithTitle:(id)a0 contentArea:(id)a1 needsBodyText:(BOOL)a2;
- (id)initWithTitle:(id)a0 bodyText:(id)a1 animationView:(id)a2;
- (void)setPrivacyLinkForBundles:(id)a0;
- (void)setPrivacyLinkForBundles:(id)a0 withLanguage:(id)a1;
- (void)setTopAnimationAccessibilityDescription:(id)a0;
- (void)setTopImageSymbolName:(id)a0 withAccesibilityDescription:(id)a1;
- (void)updateScrollElasticity;

@end
