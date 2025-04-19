@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListDisplayAssetCollectionItem

@property (readonly, nonatomic) PHAssetCollection *collection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDraggable;
- (id)accessoryGlyphImageName;
- (id)accessoryTitle;
- (id)initWithAssetCollection:(id)a0 itemCount:(long long)a1 containerIdentifier:(id)a2;

@end
