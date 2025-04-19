@class NSArray, NSMutableArray;

@interface ICNFIMAPCompoundDownload : ICNFIMAPDownload {
    NSMutableArray *_subdownloads;
}

@property (readonly, copy) NSArray *subdownloads;
@property (readonly) unsigned long long countOfSubdownloads;

- (id)description;
- (void).cxx_destruct;
- (id)error;
- (BOOL)isComplete;
- (unsigned int)bytesFetched;
- (void)addSubdownload:(id)a0;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)createCopy;
- (unsigned int)expectedLength;
- (id)objectInSubdownloadsAtIndex:(unsigned long long)a0;
- (void)processResults;
- (void)removeObjectFromSubdownloadsAtIndex:(unsigned long long)a0;
- (void)removeSubdownload:(id)a0;

@end
