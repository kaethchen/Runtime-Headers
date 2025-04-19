@class NSView, NSAttributedString, AMSUICommonVisualEffectView, NSArray, NSScrollView, MicaPlayer, NSColor, AMSUICommonImageView, AMSDialogAction, NSImageView, AMSUIMessageViewLayoutContext, AMSUICommonTextView;

@interface AMSUIMessageView : AMSUICommonView

@property (retain) NSArray *ams_accessibilitySupplementaryFooterViews;
@property (retain) AMSUICommonVisualEffectView *backgroundVisualEffectView;
@property (retain) NSScrollView *containerView;
@property (retain) NSView *imageContainerView;
@property unsigned long long imageStyle;
@property (retain) AMSUIMessageViewLayoutContext *layoutContext;
@property (retain) MicaPlayer *micaPlayer;
@property (retain) NSArray *separatorViews;
@property unsigned long long style;
@property (retain) NSView *accessoryView;
@property (retain) NSView *accessorySecondaryView;
@property (retain) NSArray *footerButtonViews;
@property (retain) NSImageView *backgroundImageView;
@property (copy) NSColor *iconColor;
@property (readonly) AMSUICommonImageView *imageView;
@property BOOL isImageSymbolImage;
@property BOOL isSizing;
@property (retain) NSAttributedString *message;
@property (copy) NSColor *separatorColor;
@property (readonly) AMSUICommonTextView *textView;
@property (readonly) AMSDialogAction *bodyAction;
@property (retain) NSAttributedString *title;
@property BOOL preLayoutImageView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setBackgroundColor:(id)a0;
- (void)_setupDefaults;
- (id)_makeSeparatorView;
- (void)_startObservations;
- (double)_textViewParagraphSpacingBefore;
- (void)_setupImageView;
- (void)_endObservations;
- (void)_recordNewsDebugEventWithCategory:(id)a0;
- (void)_setAccessibility;
- (void)_setAccessibilityIdentifier;
- (void)_setBackground;
- (void)_setMICAPlayerTintColor:(id)a0;
- (void)_setShadow;
- (void)_setTextViewText;
- (void)_setupImageViewDefault;
- (void)_setupInitialLayout;
- (void)_setupMICAAssetWithData:(id)a0 originalURL:(id)a1;
- (void)didMoveToSuperview;
- (void)removeBubbleArrowMaskView;
- (void)setAccessorySecondaryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setAccessoryViewForDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setBodyDialogAction:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setFooterForDialogActions:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setupBubbleArrowMaskView;

@end
