@class NSTextField, NSFont, NSImage, NSString, NSLayoutConstraint, NSStackView, NSButton;

@interface AMPEmptyStateLockup : AMPBindableView

@property (retain, nonatomic) NSStackView *contentStack;
@property (retain, nonatomic) NSButton *artworkButton;
@property (retain, nonatomic) NSTextField *primaryString;
@property (retain, nonatomic) NSTextField *secondaryString;
@property (retain, nonatomic) NSButton *linkButton;
@property (readonly, nonatomic) NSFont *primaryLabelFont;
@property (retain, nonatomic) NSLayoutConstraint *iconAspectConstraint;
@property (retain, nonatomic) NSImage *icon;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) unsigned long long iconAdornment;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSImage *buttonIcon;
@property (nonatomic) BOOL buttonIsEmphasized;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ artworkAction;

+ (id)lockup;
+ (id)keyPathsForValuesAffectingLinkButtonTintColor;
+ (id)smallLockup;

- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)a0;
- (void)layout;
- (void)awakeFromNib;
- (void)setAccessibilityText:(id)a0;
- (void)doArtworkClick:(id)a0;
- (void)applyIconAdornment;
- (void)applySmallMetrics;
- (void)doLinkButton:(id)a0;
- (id)linkButtonTintColor;

@end
