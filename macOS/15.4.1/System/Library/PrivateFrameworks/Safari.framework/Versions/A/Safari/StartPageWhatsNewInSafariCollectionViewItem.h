@class NSImageView, NSTextField, NSButton, NSArray, NSStackView, NSGridCell;
@protocol StartPageWhatsNewInSafariCollectionViewItemDelegate;

@interface StartPageWhatsNewInSafariCollectionViewItem : NSCollectionViewItem {
    NSArray *_accessibiltyChildren;
}

@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSTextField *headerLabel;
@property (weak, nonatomic) NSTextField *topLeadingTitleLabel;
@property (weak, nonatomic) NSTextField *bottomLeadingTitleLabel;
@property (weak, nonatomic) NSTextField *topTrailingTitleLabel;
@property (weak, nonatomic) NSTextField *bottomTrailingTitleLabel;
@property (weak, nonatomic) NSTextField *topLeadingSubtitleLabel;
@property (weak, nonatomic) NSTextField *bottomLeadingSubtitleLabel;
@property (weak, nonatomic) NSTextField *topTrailingSubtitleLabel;
@property (weak, nonatomic) NSTextField *bottomTrailingSubtitleLabel;
@property (weak, nonatomic) NSImageView *bottomTrailingIcon;
@property (weak, nonatomic) NSImageView *bottomLeadingIcon;
@property (weak, nonatomic) NSImageView *topLeadingIcon;
@property (weak, nonatomic) NSImageView *topTrailingIcon;
@property (weak, nonatomic) NSGridCell *topLeadingTextCell;
@property (weak, nonatomic) NSGridCell *topTrailingTextCell;
@property (weak, nonatomic) NSGridCell *bottomLeadingTextCell;
@property (weak, nonatomic) NSGridCell *bottomTrailingTextCell;
@property (weak, nonatomic) NSButton *closeButton;
@property (weak) id<StartPageWhatsNewInSafariCollectionViewItemDelegate> delegate;
@property (nonatomic) BOOL forPrivateBrowsing;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id)a0;
- (BOOL)isAccessibilityAutoInteractable;
- (id)_sections;
- (void)_updateAccessibilityChildren;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_updateAppearance;
- (void)openLink:(id)a0;
- (void)_updateSections;
- (void)_updateSectionsForPrivateBrowsing;

@end
