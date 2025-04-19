@class CPLChangeBatch, NSMutableSet;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (retain, nonatomic) NSMutableSet *computeSyncRelevantAssetsInBatch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addRecord:(id)a0;
- (id)lastAddedRecord;
- (id)batchesSplitForError;
- (void)incrementRetryCount;

@end
