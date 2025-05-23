@class NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableIndexSet *_unusedIndexes;
    long long _usedMax;
    unsigned long long _fetchTimestamp;
}

+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)a0;
+ (void)recycleThumbnailIndexes:(id)a0 inLibrary:(id)a1;
+ (void)getAvailableThumbnailIndexInLibrary:(id)a0 withHandler:(id /* block */)a1;
+ (void)getAvailableThumbnailIndexesInLibrary:(id)a0 withCount:(unsigned long long)a1 handler:(id /* block */)a2;
+ (id)occupiedThumbnailIndexesWithLibrary:(id)a0 fetchTimestampToUpdate:(unsigned long long *)a1;
+ (id)occupiedThumbnailIndexesWithLibrary:(id)a0 fetchTimestampToUpdate:(unsigned long long *)a1 outFetchCount:(unsigned long long *)a2;
+ (void)recycleThumbnailIndexes:(id)a0 inLibrary:(id)a1 timestamp:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)a0;
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)a0 inLibrary:(id)a1;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)a0 inLibrary:(id)a1 handler:(id /* block */)a2;
- (void)recycleThumbnailIndexes:(id)a0 timestamp:(unsigned long long)a1;

@end
