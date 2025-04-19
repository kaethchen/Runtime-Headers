@class NSTextField, NSView, NSAttributedString, NSString, NSStackView, NSImage, NSImageView, NSButton;
@protocol AppLinkBannerDelegate;

@interface AppLinkBanner : Banner

@property (weak, nonatomic) NSButton *closeButton;
@property (weak, nonatomic) NSImageView *iconImageView;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *descriptionLabel;
@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSView *labelContainer;
@property (weak, nonatomic) NSButton *openButton;
@property (weak, nonatomic) id<AppLinkBannerDelegate> appLinkDelegate;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) BOOL showsCloseButton;
@property (copy, nonatomic) NSString *appIconAccessibilityLabel;

+ (int)bannerSortOrder;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_closeButtonWasClicked:(id)a0;
- (void)_openButtonWasClicked:(id)a0;
- (id)bannerNibName;

@end
