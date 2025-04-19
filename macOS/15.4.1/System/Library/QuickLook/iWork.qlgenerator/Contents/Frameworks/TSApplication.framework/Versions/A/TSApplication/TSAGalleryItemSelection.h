@class NSOrderedSet, TSAGalleryItem;

@interface TSAGalleryItemSelection : TSKSelection

@property (readonly, nonatomic) TSAGalleryItem *displayedItem;
@property (readonly, nonatomic) NSOrderedSet *items;

+ (Class)archivedSelectionClass;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)initWithItems:(id)a0 displayedItem:(id)a1;

@end
