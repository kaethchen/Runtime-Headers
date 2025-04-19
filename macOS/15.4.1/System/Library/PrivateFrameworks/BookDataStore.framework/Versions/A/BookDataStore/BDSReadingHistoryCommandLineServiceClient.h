@protocol BDSServiceProtocol;

@interface BDSReadingHistoryCommandLineServiceClient : NSObject <BDSReadingHistoryBackupServiceClient>

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;

+ (id)sharedServiceProxy;

- (id)init;
- (void).cxx_destruct;
- (void)clearDataWithCompletionHandler:(id /* block */)a0;
- (void)backupWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearTodayWithCompletionHandler:(id /* block */)a0;
- (void)incrementWithDate:(id)a0 by:(long long)a1 completionHandler:(id /* block */)a2;
- (void)listBackupWithCompletionHandler:(id /* block */)a0;
- (void)readingHistoryStateInfoWithRangeStart:(id)a0 rangeEnd:(id)a1 currentTime:(id)a2 completionHandler:(id /* block */)a3;
- (void)restoreWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)serviceStatusInfoWithCompletionHandler:(id /* block */)a0;

@end
