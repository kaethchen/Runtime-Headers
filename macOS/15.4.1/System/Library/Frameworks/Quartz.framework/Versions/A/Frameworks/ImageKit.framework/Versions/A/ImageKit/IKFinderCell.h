@interface IKFinderCell : IKIconCell {
    short _canDrawPlaceholder;
    short _isMoreButton;
}

+ (struct CGPoint { double x0; double x1; })anchorPointWithView:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredBoundsForSettings:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredBoundsOfPart:(int)a0 iconSize:(double)a1 gridSpacing:(double)a2 labelAttributes:(id)a3 titlesOnRight:(BOOL)a4 options:(id)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredCellBoundsForIconSize:(double)a0 maxIconSize:(double)a1 gridSpacing:(double)a2 textAttributes:(id)a3 titlesOnRight:(BOOL)a4 showInfo:(BOOL)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredIconBoundsForIconSize:(double)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredIconBoundsForIconSize:(double)a0 aspectRatio:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredLabelBoundsForIconSize:(double)a0 maxIconSize:(double)a1 gridSpacing:(double)a2 textAttributes:(id)a3 titlesOnRight:(BOOL)a4 showInfo:(BOOL)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredSelectionBoundsForIconSize:(double)a0 maxIconSize:(double)a1;
+ (struct CGSize { double x0; double x1; })cellSizeForIconSize:(double)a0 gridSpacing:(double)a1 textAttributes:(id)a2 titlesOnRight:(BOOL)a3 showInfo:(BOOL)a4;
+ (struct CGSize { double x0; double x1; })cellSizeForIconSize:(double)a0 maxIconSize:(double)a1 gridSpacing:(double)a2 textAttributes:(id)a3 titlesOnRight:(BOOL)a4 showInfo:(BOOL)a5;
+ (struct CGSize { double x0; double x1; })cellSpacingForIconSize:(double)a0 gridSpacing:(double)a1 titlesOnRight:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })cellSpacingForIconSize:(double)a0 maxIconSize:(double)a1 gridSpacing:(double)a2 titlesOnRight:(BOOL)a3;
+ (id)moreButtonUID;
+ (double)selectionRadiusForIconSize:(double)a0 maxIconSize:(double)a1;
+ (BOOL)shouldWrapLabelsForIconSize:(double)a0 gridSpacing:(double)a1 titlesOnRight:(BOOL)a2;
+ (BOOL)supportsHeightOfInfoSpaceFactorization;
+ (id)titleAttributeKeys;

- (BOOL)isSelectable;
- (id)subtitleString;
- (double)selectionRadius;
- (void)_drawMoreButton;
- (void)drawPlaceHolder;
- (BOOL)canDrawPlaceholder;
- (BOOL)disableTwoLineTitles;
- (void)drawSelection;
- (int)heightOfInfoSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForImageContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForImageContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useAspectRatio:(BOOL)a1;
- (BOOL)isMoreButton;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })usedRectInCellFrame:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)wantsRollover;

@end
