@interface FI_TIconViewController : FI_TCollectionViewItem

+ (id)itemIdentifier;

- (BOOL)_hasOpaquePartsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_titleViews;
- (id)iconView;
- (void)loadView;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (id)iconViewNoLoad;
- (void)setUseActiveAppearance:(BOOL)a0;
- (void)updateHighlightedOrSelectedAppearance;

@end
