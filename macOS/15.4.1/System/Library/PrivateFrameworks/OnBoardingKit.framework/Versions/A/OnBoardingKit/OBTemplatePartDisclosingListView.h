@class NSTextField, NSView, NSString, NSStackView, OBTemplatePartBulletList, NSImage, NSLayoutConstraint, NSImageView, NSBox;

@interface OBTemplatePartDisclosingListView : NSView

@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSStackView *topStackView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *descriptionLabel;
@property (retain, nonatomic) NSImageView *disclosureIndicator;
@property (retain, nonatomic) NSStackView *textStackView;
@property (retain, nonatomic) NSView *topArea;
@property (retain, nonatomic) NSView *bottomArea;
@property (retain, nonatomic) NSImage *forwardChevron;
@property (retain, nonatomic) NSImage *downChevron;
@property (retain, nonatomic) NSLayoutConstraint *topStackToBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topStackToDividerConstraint;
@property (retain, nonatomic) NSBox *divider;
@property BOOL needsExtraWideContent;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *bodyText;
@property (retain, nonatomic) NSImage *iconImage;
@property (retain, nonatomic) NSString *iconSymbol;
@property (retain, nonatomic) OBTemplatePartBulletList *bulletList;

- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)updateLayer;
- (void)viewWillDraw;
- (void)_updateWidth;
- (void)disclosureClicked:(id)a0;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 bulletList:(id)a3 imageTintColor:(id)a4;
- (id)initWithTitle:(id)a0 description:(id)a1 symbol:(id)a2 bulletList:(id)a3 symbolTintColor:(id)a4;

@end
