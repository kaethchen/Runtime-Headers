@class NSTextField, NSArray, NSButton, NSStackView;
@protocol StartPagePrivateRelayInPrivateBrowsingCollectionViewItemDelegate;

@interface StartPagePrivateRelayInPrivateBrowsingCollectionViewItem : NSCollectionViewItem {
    NSArray *_accessibiltyChildren;
}

@property (weak, nonatomic) NSButton *closeButton;
@property (retain, nonatomic) NSButton *learnMoreButton;
@property (retain, nonatomic) NSButton *enablePrivateRelayButton;
@property (weak, nonatomic) NSTextField *bodyText;
@property (weak, nonatomic) NSTextField *titleText;
@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSStackView *buttonStackView;
@property (weak, nonatomic) id<StartPagePrivateRelayInPrivateBrowsingCollectionViewItemDelegate> delegate;

- (void).cxx_destruct;
- (void)close:(id)a0;
- (BOOL)isAccessibilityAutoInteractable;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (id)_attributedStringForTitle;
- (void)enablePrivateRelay:(id)a0;
- (void)learnMore:(id)a0;

@end
