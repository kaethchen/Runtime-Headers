@class NSMutableDictionary, NSMutableIndexSet;

@interface UXCollectionViewIndexPathsSet : NSObject <NSCopying, NSMutableCopying> {
    NSMutableIndexSet *_sectionIndexes;
    NSMutableDictionary *_sectionToItemIndexesMap;
}

+ (id)indexPathsSetWithIndexPathsSet:(id)a0;
+ (id)indexPathsSet;
+ (id)indexPathsSetWithIndexPath:(id)a0;
+ (id)indexPathsSetWithIndexPaths:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)allIndexPaths;
- (BOOL)containsIndexPath:(id)a0;
- (id)sections;
- (id)initWithIndexPath:(id)a0;
- (id)itemsInSection:(long long)a0;
- (void)_addIndexPathsSet:(id)a0;
- (void)_addOneIndexPath:(id)a0;
- (void)_enumerateSectionItemIndexesWithBlock:(id /* block */)a0;
- (id)_itemIndexesForSection:(unsigned long long)a0 allowingCreation:(BOOL)a1;
- (void)_removeItemIndexesForSection:(unsigned long long)a0;
- (void)_removeOneIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (id)firstIndexPath;
- (id)indexPathsForSection:(long long)a0;
- (id)indexPathsForSections:(id)a0;
- (id)initWithIndexPaths:(id)a0;
- (id)initWithIndexPathsSet:(id)a0;
- (id)lastIndexPath;

@end
