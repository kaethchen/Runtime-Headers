@class NSMutableArray, NSMutableDictionary;
@protocol UXCollectionViewDelegateFlowLayout;

@interface UXTableLayout : UXCollectionViewFlowLayout {
    struct { unsigned char delegateSupplementaryViewDidBeginFloating : 1; unsigned char delegateSupplementaryViewDidEndFloating : 1; unsigned char delegateRreferenceSizeForHeaderInSection : 1; unsigned char delegateLayoutInsetForSectionAtIndex : 1; unsigned char needsDelegateFlagsUpdate : 1; unsigned char floatingHeadersDisabled : 1; unsigned char preparingForUpdates : 1; unsigned char showsSectionHeaderForSingleSection : 1; unsigned char showsSectionFooterForSingleSection : 1; } _tableLayoutFlags;
}

@property (readonly, nonatomic) NSMutableArray *layoutAttributesArray;
@property (readonly, nonatomic) NSMutableDictionary *headerAttributesByIndexPath;
@property (readonly, nonatomic) id<UXCollectionViewDelegateFlowLayout> delegateFlowLayout;
@property (nonatomic) BOOL showsSectionHeaderForSingleSection;
@property (nonatomic) BOOL showsSectionFooterForSingleSection;
@property (nonatomic) BOOL floatingHeadersDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)_setCollectionView:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_wantsHeaderForSection:(unsigned long long)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetForSection:(long long)a0;

@end
