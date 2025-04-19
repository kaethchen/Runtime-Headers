@class NSArray, NSCollectionViewLayoutAttributes;

@interface IMGroupAcknowledgementPollSectionLayoutAttributes : NSObject

@property (readonly) NSArray *avatarCellLayoutAttributes;
@property (retain) NSArray *avatarLabelLayoutAttributes;
@property (retain) NSCollectionViewLayoutAttributes *footerLayoutAttributes;
@property (getter=isExpanded) BOOL expanded;
@property BOOL shouldHideAll;
@property (nonatomic) double distanceFromLeadingEdge;

+ (id)testSectionFooterView;

- (void).cxx_destruct;
- (void)_calculateLayoutAttributes;
- (void)_translateXBy:(double)a0;
- (id)initForSection:(unsigned long long)a0 cellCount:(unsigned long long)a1 expanded:(BOOL)a2 shouldHideAll:(BOOL)a3;

@end
