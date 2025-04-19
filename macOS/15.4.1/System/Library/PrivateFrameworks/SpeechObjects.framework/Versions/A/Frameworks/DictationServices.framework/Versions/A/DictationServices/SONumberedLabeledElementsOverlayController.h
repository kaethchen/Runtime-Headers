@interface SONumberedLabeledElementsOverlayController : SOLabeledElementsOverlayController

@property (nonatomic) double xOffset;
@property (nonatomic) double yOffset;
@property (nonatomic) BOOL prefersNoArrowBadge;

+ (void)assignNumbersToLabeledElements:(id)a0 startingNumberedLabelsAtIndex:(unsigned long long)a1 randomize:(BOOL)a2;
+ (id)badgeViewWithNumber:(unsigned long long)a0 arrowOrientation:(long long)a1;

- (id)_bestScreenForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLabeledElement:(id)a1 justLabelRect:(BOOL)a2 additionalElements:(id)a3;
- (void)_logCurrentGroupingForElements:(id)a0 prefix:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mostLikeyScreenFrameForLabeledElement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addLabelViewsForElements:(id)a0;
- (void)arrangeNewLabeledElements:(id)a0;
- (void)removeLabelViews;
- (void)showLabeledElements;

@end
