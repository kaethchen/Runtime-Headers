@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _NSCollectionViewPrefetchingContext : NSObject

@property (retain, nonatomic) NSArray *remainingIndexPaths;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *itemsDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataAccessQueue;

+ (id)prefetchingContextWithItems:(id)a0;

- (void).cxx_destruct;
- (void)_invalidateRemainingIndexPaths;
- (id)_items;
- (BOOL)hasRemainingItems;
- (id)initWithPrefetchItems:(id)a0;
- (id)peekNextItem;
- (id)popNextItem;
- (void)prefetchCompleteForItemAtIndexPath:(id)a0;
- (void)removeItemAtIndexPath:(id)a0;

@end
