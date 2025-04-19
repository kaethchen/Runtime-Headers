@interface FCModifyShortcutCategoryListCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithShortcutCategories:(id)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
