@interface GameCenterUI.AppLockupsPlatterView : GameCenterUI.AppStoreContentPlatterView {
    void /* unknown type, empty encoding */ lockupViews;
    void /* unknown type, empty encoding */ placeholderView;
    void /* unknown type, empty encoding */ emptyStateView;
    void /* unknown type, empty encoding */ hasEmptyStateData;
    void /* unknown type, empty encoding */ maxLockupCount;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeWithFitting:(struct CGSize { double x0; double x1; })a0;
- (void)layoutContentsIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
