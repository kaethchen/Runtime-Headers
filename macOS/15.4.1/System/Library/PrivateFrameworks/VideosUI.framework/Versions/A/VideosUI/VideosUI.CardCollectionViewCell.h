@interface VideosUI.CardCollectionViewCell : VUIFloatingCollectionViewCell {
    void /* unknown type, empty encoding */ cardView;
    void /* unknown type, empty encoding */ isLockupSelected;
    void /* unknown type, empty encoding */ isLockupSelectionHidden;
    void /* unknown type, empty encoding */ cardViewLayout;
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ syndicationId;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityChildren;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (BOOL)isAccessibilityElement;
- (void)didSelectContextMenuAction;
- (void)didSelectPlayButtonAction;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_setHighlighted:(BOOL)a0;

@end
