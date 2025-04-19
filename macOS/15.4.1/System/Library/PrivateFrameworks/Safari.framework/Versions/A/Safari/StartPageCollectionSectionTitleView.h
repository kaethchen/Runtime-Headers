@class NSImageView, StartPageCollectionSectionTitleConfiguration, NSString, NSView, NSColor, NSStackView, NSButton;
@protocol StartPageCollectionSectionTitleViewDelegate;

@interface StartPageCollectionSectionTitleView : NSView <NSCollectionViewElement> {
    NSButton *_backButton;
}

@property (class, readonly, nonatomic) double defaultTitleViewHeight;

@property (weak, nonatomic) NSStackView *contentStackView;
@property (weak, nonatomic) NSButton *sectionTitleButton;
@property (weak, nonatomic) NSButton *collapseButton;
@property (weak, nonatomic) NSImageView *leadingImageView;
@property (weak, nonatomic) id<StartPageCollectionSectionTitleViewDelegate> delegate;
@property (copy, nonatomic) StartPageCollectionSectionTitleConfiguration *configuration;
@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *titleAccessibilityLabel;
@property (copy, nonatomic) id /* block */ sectionTitlePopupAction;
@property (nonatomic) BOOL canCollapseSection;
@property (nonatomic) BOOL isSectionCollapsed;
@property (nonatomic) BOOL isShowMoreButtonVisible;
@property (nonatomic) BOOL canGoBack;
@property (retain, nonatomic) NSView *trailingAccessoryView;
@property (retain, nonatomic) NSView *secondaryTrailingAccessoryView;
@property (retain, nonatomic) NSColor *controlTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)a0;
- (id)accessibilityRole;
- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (void)_applyConfiguration;
- (void)_goBack:(id)a0;
- (void)_titleButtonClicked:(id)a0;
- (void)_updateGoBackButton;
- (void)_updateTrailingButtons;
- (void)toggleCollapseSection:(id)a0;

@end
