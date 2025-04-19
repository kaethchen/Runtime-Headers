@class NSArray, NSMutableArray;

@interface FI_TOutlineViewItem : FI_TTableViewItem {
    NSMutableArray *_children;
}

@property (readonly, nonatomic) NSArray *children;
@property (nonatomic) BOOL isLeaf;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)flattenedChildren;

@end
