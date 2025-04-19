@class PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListDisplayCollectionListItem

@property (readonly, nonatomic) PHCollectionList *collection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCollectionList:(id)a0 itemCount:(long long)a1 containerIdentifier:(id)a2;

@end
