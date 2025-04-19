@class NSString, NSUICollectionView, NSUICollectionViewLayoutAttributes;

@interface NSUICollectionReusableView : NSView {
    NSUICollectionViewLayoutAttributes *_layoutAttributes;
    NSUICollectionView *_collectionView;
    struct { unsigned char updateAnimationCount : 5; unsigned char wasDequeued : 1; } _reusableViewFlags;
}

@property (readonly, copy, nonatomic) NSString *reuseIdentifier;

+ (void)_gkAdjustConstraintMargins:(id)a0 leading:(double)a1 trailing:(double)a2;
+ (void)_gkSetupSelectableThreeLineLayoutWithCell:(id)a0 icon:(id)a1 selectionView:(id)a2 upperLine:(id)a3 middleLine:(id)a4 lowerLine:(id)a5 metricOverrides:(id)a6;
+ (void)_gkSetupSelectableTwoLineLayoutWithCell:(id)a0 icon:(id)a1 selectionView:(id)a2 upperLine:(id)a3 lowerLine:(id)a4 metricOverrides:(id)a5;
+ (id)_gkSetupThreeLineLayoutWithSuperview:(id)a0 icon:(id)a1 upperLine:(id)a2 middleLine:(id)a3 lowerLine:(id)a4 metricOverrides:(id)a5;
+ (id)_gkStandardConstraintMetricsForIdiom:(int)a0;
+ (id)_gkStandardConstraintMetricsForIdiom:(int)a0 withOverrides:(id)a1;
+ (void)registerSupplementaryViewClassesForKind:(id)a0 withCollectionView:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)_markAsDequeued;
- (void)_addUpdateAnimation;
- (void)_clearUpdateAnimation;
- (BOOL)_isInUpdateAnimation;
- (id)_layoutAttributes;
- (void)_setBaseLayoutAttributes:(id)a0;
- (void)_setCollectionView:(id)a0;
- (void)_setLayoutAttributes:(id)a0;
- (void)_setReuseIdentifier:(id)a0;
- (BOOL)_wasDequeued;
- (void)applyLayoutAttributes:(id)a0;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)_collectionView;
- (id)_gkNewStandardImageView;
- (id)_gkNewStandardInfoLabel;
- (id)_gkNewStandardTitleLabel;
- (void)_gkSetLeadingGuideConstraint:(id)a0 trailingGuideConstraint:(id)a1;

@end
