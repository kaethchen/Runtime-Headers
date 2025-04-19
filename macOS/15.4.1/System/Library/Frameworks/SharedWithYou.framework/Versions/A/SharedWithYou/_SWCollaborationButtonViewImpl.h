@class NSColor, NSString, NSItemProvider;

@interface _SWCollaborationButtonViewImpl : NSView <NSPopoverDelegate> {
    void /* unknown type, empty encoding */ sBehaviors;
    void /* unknown type, empty encoding */ sharedWithYouCenter;
    void /* unknown type, empty encoding */ headerTitle;
    void /* unknown type, empty encoding */ headerSubtitle;
    void /* unknown type, empty encoding */ _isContentShared;
    void /* unknown type, empty encoding */ highlightSubscriptionCancellable;
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ centerXAnchorHiddenLabel;
    void /* unknown type, empty encoding */ attributionViewXAnchorVisibleLabel;
    void /* unknown type, empty encoding */ labelXAnchorHidden;
    void /* unknown type, empty encoding */ containerLeadingConstraint;
    void /* unknown type, empty encoding */ containerTrailingConstraint;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ detailViewController;
    void /* unknown type, empty encoding */ isRTL;
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ popover;
    void /* unknown type, empty encoding */ popoverDidCloseNotificationObserver;
}

@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic) BOOL isContentShared;
@property (nonatomic, retain) NSColor *tintColor;
@property (nonatomic) void /* unknown type, empty encoding */ activeParticipantCount;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ headerImage;
@property (nonatomic, weak) void /* unknown type, empty encoding */ outerButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long controlSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithItemProvider:(id)a0;
- (void)setDetailViewListContent:(id)a0;
- (void)setShowManageButton:(BOOL)a0;
- (void)buttonTapped:(id)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePlaceHolderSymbolScale:(long long)a0 weight:(double)a1 pointSize:(double)a2;

@end
