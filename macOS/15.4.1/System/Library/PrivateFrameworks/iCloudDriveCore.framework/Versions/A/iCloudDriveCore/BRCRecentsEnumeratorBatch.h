@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, NSFileProviderEnumerationObserver, NSFileProviderItem;

@interface BRCRecentsEnumeratorBatch : NSObject {
    NSMutableArray<NSFileProviderItem> *_toIndexItems;
    NSMutableArray *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSFileProviderEnumerationObserver> _observer;
}

@property (nonatomic) unsigned long long rank;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBatchSize:(unsigned long long)a0;
- (unsigned long long)batchCount;
- (void)addIndexOfItem:(id)a0;
- (void)addDeletionOfFileObjectID:(id)a0 rank:(unsigned long long)a1;
- (void)listItems:(id /* block */)a0;

@end
