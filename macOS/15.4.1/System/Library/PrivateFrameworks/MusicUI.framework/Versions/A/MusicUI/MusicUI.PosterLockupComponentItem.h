@interface MusicUI.PosterLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ accessoryBadgeView;
    void /* unknown type, empty encoding */ topTitleLabel;
    void /* unknown type, empty encoding */ topSubtitleLabel;
    void /* unknown type, empty encoding */ bottomTitleLabel;
    void /* unknown type, empty encoding */ bottomSubtitleLabel;
    void /* unknown type, empty encoding */ bottomDescriptionLabel;
    void /* unknown type, empty encoding */ topGradientOverlay;
    void /* unknown type, empty encoding */ shouldShowTopGradient;
    void /* unknown type, empty encoding */ bottomGradientOverlay;
    void /* unknown type, empty encoding */ shouldShowBottomGradient;
    void /* unknown type, empty encoding */ chinView;
    void /* unknown type, empty encoding */ shouldShowChin;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ overlayConfiguration;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ bottomTextAlignment;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ videoLooperDidChangeHandler;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityRole;
- (void)loadView;
- (void)viewWillLayout;

@end
