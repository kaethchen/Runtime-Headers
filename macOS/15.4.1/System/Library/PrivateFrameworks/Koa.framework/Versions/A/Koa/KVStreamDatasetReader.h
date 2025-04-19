@class NSString, NSData, KVDatasetInfo;

@interface KVStreamDatasetReader : NSObject <KVDatasetReader> {
    NSData *_data;
    unsigned int _offset;
    KVDatasetInfo *_datasetInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)offset;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)datasetInfo;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
