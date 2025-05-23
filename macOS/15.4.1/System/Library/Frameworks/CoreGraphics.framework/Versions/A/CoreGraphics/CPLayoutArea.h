@interface CPLayoutArea : CPRotatedRegion {
    BOOL isFirstLayout;
    BOOL hasRotatedCharacters;
}

- (id)description;
- (id)init;
- (id)properties;
- (double)selectionBottom;
- (void)accept:(id)a0;
- (void)addColumnBreaks;
- (BOOL)hasRotatedCharacters;
- (BOOL)isBoxRegion;
- (BOOL)isFirstLayout;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isSimilarTo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutAreaBounds;
- (void)setHasRotatedCharacters:(BOOL)a0;
- (void)setIsFirstLayout:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;

@end
