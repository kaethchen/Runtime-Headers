@interface FI_TLabelViewCell : NSLabelViewCell

@property (nonatomic) unsigned long long whichFavoriteTagsWillRemove;
@property (nonatomic) BOOL forApplyingFavoriteTags;
@property (nonatomic) long long observableHoveredPart;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForLabel:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_drawPart:(long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_labelAttributes;
- (id)_nameForLabelPart:(long long)a0;
- (long long)_partAtPoint:(struct CGPoint { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)accessibilityIdentifier;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })part:(long long)a0 boundsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)favoriteValue;
- (BOOL)partWillRemoveATag:(long long)a0;
- (unsigned long long)selectedFavoriteTags;
- (void)setSelectedFavoriteTags:(unsigned long long)a0;

@end
