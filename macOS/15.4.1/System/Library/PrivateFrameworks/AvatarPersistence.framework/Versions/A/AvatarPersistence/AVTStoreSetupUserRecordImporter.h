@class AVTCoreEnvironment;
@protocol AVTUILogger, AVTStoreBackend;

@interface AVTStoreSetupUserRecordImporter : NSObject

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTStoreBackend> backend;

- (void).cxx_destruct;
- (void)importSetupUserDrafts;
- (id)initWithEnvironment:(id)a0 backend:(id)a1;
- (void)removeSetupUserMemojiData;
- (id)urlForSetupUserMemojiData;

@end
