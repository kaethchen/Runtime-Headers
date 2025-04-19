@class NSIndexPath, NSMutableDictionary;

@interface KHPagingLayout : UXCollectionViewFlowLayout

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) long long pagingType;
@property (readonly, nonatomic) NSMutableDictionary *pagingAttributes;

+ (Class)layoutAccessibilityClass;

- (id)init;
- (void).cxx_destruct;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)_applyTransformForAttributes:(id)a0;
- (void)_updateOffScreenAttributes:(id)a0;
- (void)_updateOnScreenAttributes:(id)a0;
- (void)applyParallaxToAttributes:(id)a0;

@end
