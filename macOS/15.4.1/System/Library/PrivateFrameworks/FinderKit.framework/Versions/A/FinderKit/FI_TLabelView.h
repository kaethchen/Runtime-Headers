@interface FI_TLabelView : NSLabelView

+ (Class)cellClass;
+ (id)colorNames;
+ (struct CGSize { double x0; double x1; })sizeWithImagePosition:(unsigned long long)a0;

- (void)setEnabled:(BOOL)a0;
- (void)setWhichFavoriteTagsWillRemove:(unsigned long long)a0;
- (long long)favoriteValue;
- (id)labelCell;
- (unsigned long long)selectedFavoriteTags;
- (void)setForApplyingFavoriteTags:(BOOL)a0;
- (void)setSelectedFavoriteTags:(unsigned long long)a0;
- (unsigned long long)whichFavoriteTagsWillRemove;

@end
