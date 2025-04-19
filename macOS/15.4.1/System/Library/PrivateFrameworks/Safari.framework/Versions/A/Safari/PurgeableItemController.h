@class NSArray;

@interface PurgeableItemController : NSObject

@property (retain, nonatomic) NSArray *purgeableItems;

- (void).cxx_destruct;
- (id)initWithPurgeableItems:(id)a0;
- (BOOL)purgeItemsOfMinimalPurgeOrder:(unsigned long long)a0 totalSizeOfItemsPurged:(unsigned long long *)a1;
- (unsigned long long)sizeOfPurgeableItemsOfMinimalPurgeOrder:(unsigned long long)a0;

@end
