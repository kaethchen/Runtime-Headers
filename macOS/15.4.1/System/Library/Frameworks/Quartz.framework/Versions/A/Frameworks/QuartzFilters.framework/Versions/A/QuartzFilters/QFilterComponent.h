@class NSString, QFilterInfo, QFilter, QFilterComponentChild;

@interface QFilterComponent : NSObject

@property QFilter *parent;
@property int componentID;
@property (copy) NSString *name;
@property (retain) QFilterInfo *filterInfo;
@property (retain) QFilterComponentChild *child;

+ (BOOL)isUsedInFilter:(id)a0;
+ (id)filterComponentWithFilterInfo:(id)a0 parent:(id)a1;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (void)dealloc;
- (id)init;
- (BOOL)addCell;
- (BOOL)canGrow;
- (id)createGrowableItem;
- (id)growableItems;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1 componentID:(int)a2 name:(id)a3;
- (id)keysForValuesToObserveForUndo;
- (id)profileNamesForDataType:(int)a0 numToSkip:(long long *)a1;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;

@end
