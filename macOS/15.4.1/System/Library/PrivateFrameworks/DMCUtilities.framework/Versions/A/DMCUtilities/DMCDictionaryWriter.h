@class NSString, NSDictionary, NSError, DMCFileAccessRepairTool;

@interface DMCDictionaryWriter : NSObject

@property (copy, nonatomic) NSError *serializeError;
@property (copy, nonatomic) NSError *writeError;
@property (copy, nonatomic) NSError *beforeWriteRepairError;
@property (copy, nonatomic) NSError *afterWriteRepairError;
@property (retain, nonatomic) DMCFileAccessRepairTool *repairTool;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void)reset;
- (BOOL)write;
- (id)serializedData;
- (BOOL)didWriteSucceed;
- (void)logStartOfWrite;
- (id)createRepairTool;
- (id)initWithDictionary:(id)a0 path:(id)a1;
- (id)initWithDictionary:(id)a0 path:(id)a1 writeOptions:(unsigned long long)a2;
- (void)logResultOfWrite;
- (BOOL)repairAccessIfNecessaryWithError:(id *)a0;
- (void)serializeDataAndWriteToStorage;

@end
