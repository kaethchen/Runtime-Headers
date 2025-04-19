@class NSString, IDSKVStore;

@interface IMDReplayStorageController : NSObject

@property (retain, nonatomic) IDSKVStore *store;
@property (readonly, retain, nonatomic) NSString *filePath;

- (void)dealloc;
- (id)initWithFilePath:(id)a0;
- (id)copyNextBatchWithSize:(unsigned long long)a0 iterationContext:(id *)a1;
- (void)deleteReplayDB;
- (BOOL)storeDictionary:(id)a0 error:(id *)a1;

@end
