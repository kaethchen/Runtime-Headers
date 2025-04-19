@class NSString, NSFileManager, APUnfairLock;

@interface APConfigurationResponseHandler : NSObject

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *pathToTempDir;
@property (readonly, nonatomic) NSString *pathToConfig;
@property (readonly, nonatomic) NSString *pathToTraverse;
@property (retain, nonatomic) APUnfairLock *lock;
@property (nonatomic) BOOL cancelled;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isCancelled;
- (long long)_processData:(id)a0;
- (id)_tempConfigPath;
- (long long)_configurationVersion;
- (BOOL)_copyCurrentConfigToTraverse;
- (BOOL)_createTempDirectory;
- (BOOL)_removeTempDirectory;
- (BOOL)_replaceConfigWithNewHierarchy;
- (void)_sendCoreAnalyticsWithUpdateStatus:(long long)a0 version:(long long)a1;
- (BOOL)_testingFlag;
- (long long)_traverseDirectoryAtPath:(id)a0 replacingConfigurationAtPath:(id)a1;
- (BOOL)_writeCompressedFileWithData:(id)a0 atPath:(id)a1;
- (void)cancelProcess;
- (BOOL)processResponseWithData:(id)a0;

@end
