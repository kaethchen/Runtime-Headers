@class NSMutableArray, NSCollectionViewLayout, NSMutableDictionary;

@interface NSCollectionViewTransitionLayout : NSCollectionViewLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toVisibleBounds;
    struct CGSize { double width; double height; } _contentSize;
    BOOL _haveValidInfos;
    double _transitionProgress;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    double _accuracy;
}

@property double transitionProgress;
@property (readonly) NSCollectionViewLayout *currentLayout;
@property (readonly) NSCollectionViewLayout *nextLayout;

- (id)init;
- (void).cxx_destruct;
- (void)_finalizeLayoutTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_newVisibleBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_oldVisibleBounds;
- (void)_prepareForTransitionFromLayout:(id)a0;
- (void)_prepareForTransitionToLayout:(id)a0;
- (void)_setCollectionViewCore:(id)a0;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initWithCurrentLayout:(id)a0 nextLayout:(id)a1;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)a0 toLayoutAttributes:(id)a1 progress:(double)a2;
- (void)invalidateLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (void)setTransitionProgress:(double)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)transitionProgress;
- (void)updateValue:(double)a0 forAnimatedKey:(id)a1;
- (double)valueForAnimatedKey:(id)a0;

@end
