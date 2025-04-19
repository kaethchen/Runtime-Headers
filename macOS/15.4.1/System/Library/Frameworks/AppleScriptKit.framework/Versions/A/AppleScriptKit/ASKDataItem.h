@class NSMutableArray;

@interface ASKDataItem : ASKDataRow <NSCopying> {
    ASKDataItem *_parentItem;
    NSMutableArray *_items;
}

+ (id)itemForDataSource:(id)a0 parentItem:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)contents;
- (id)content;
- (id)objectSpecifier;
- (void)removeAllItems;
- (void)removeItem:(id)a0;
- (void)setContent:(id)a0;
- (id)items;
- (id)parentItem;
- (void)setContents:(id)a0;
- (void)setParentItem:(id)a0;
- (BOOL)hasItems;
- (unsigned long long)objectIndex_ask;
- (void)addInItems:(id)a0;
- (BOOL)hasParentItem;
- (id)initForDataSource:(id)a0 parentItem:(id)a1;
- (void)insertInItems:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFromItemsAtIndex:(unsigned long long)a0;
- (void)replaceInItems:(id)a0 atIndex:(unsigned long long)a1;

@end
