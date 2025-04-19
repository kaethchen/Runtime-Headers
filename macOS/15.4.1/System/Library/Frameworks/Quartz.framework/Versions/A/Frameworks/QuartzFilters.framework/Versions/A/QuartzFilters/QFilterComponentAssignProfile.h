@interface QFilterComponentAssignProfile : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (BOOL)addCell;
- (BOOL)canGrow;
- (BOOL)addProfileTuple:(id)a0;
- (BOOL)addProfileTuple:(int)a0 data:(int)a1 profile:(long long)a2;
- (id)createGrowableItem;
- (id)growableItems;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)keysForValuesToObserveForUndo;
- (id)profileNamesForDataType:(int)a0 numToSkip:(long long *)a1;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;

@end
