@class NSMutableDictionary;

@interface LUI2UserLayout : NSCollectionViewLayout <LUI2UserLayoutProtocol>

@property (getter=_contentSize, setter=_setContentSize:) struct CGSize { double width; double height; } _contentSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutBounds;
@property (readonly) struct { struct CGPoint { double x; double y; } userPictureCenter; double userPictureRadius; struct CGSize { double width; double height; } userViewSize; } userViewDimensions;
@property (retain) NSMutableDictionary *cachedItemFrames;
@property (readonly) BOOL appearsAsButtonToAccessibility;

+ (Class)layoutAttributesClass;
+ (unsigned long long)maxUsersForPeekABoo;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)scrollDirection;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_itemFrameForIndexPath:(id)a0;
- (void)_prepareLayout;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (BOOL)shouldAnimateToLayout:(id)a0;

@end
