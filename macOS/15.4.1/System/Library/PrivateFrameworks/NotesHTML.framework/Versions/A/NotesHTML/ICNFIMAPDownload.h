@class NSData, ICNFMCError, NSMutableArray;

@interface ICNFIMAPDownload : NSObject {
    NSMutableArray *_pendingFetchResults;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned int bytesFetched;
@property (readonly, copy) NSData *data;
@property (copy) ICNFMCError *error;
@property (readonly) unsigned long long countOfPendingFetchResults;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (void)addPendingFetchResultsObject:(id)a0;
- (id)createCopy;
- (void)handleFetchResult:(id)a0;
- (id)initWithUid:(unsigned int)a0;
- (id)objectInPendingFetchResultsAtIndex:(unsigned long long)a0;
- (void)processResults;
- (void)removeObjectFromPendingFetchResultsAtIndex:(unsigned long long)a0;
- (void)sortPendingFetchResultsUsingFunction:(void /* function */ *)a0 context:(void *)a1;

@end
