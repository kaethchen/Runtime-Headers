@class NSNumber, NSMutableArray, IMGroupAcknowledgementPollViewController;

@interface IMGroupAcknowledgementPollLayout : NSCollectionViewLayout

@property (readonly) NSMutableArray *sectionLayoutAttributesArray;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } lastLayoutEdgeInsets;
@property (weak) IMGroupAcknowledgementPollViewController *groupAcknowledgementPollViewController;
@property (copy) NSNumber *expandedSection;

- (void).cxx_destruct;
- (long long)scrollDirection;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (void)invalidateLayoutAttributes;
- (id)initWithGroupAcknowledgementPollViewController:(id)a0;

@end
