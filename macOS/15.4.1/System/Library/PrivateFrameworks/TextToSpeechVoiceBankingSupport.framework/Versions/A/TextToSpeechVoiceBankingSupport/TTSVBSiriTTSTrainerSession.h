@class SiriTTSTrainerSession, NSObject;
@protocol OS_dispatch_queue;

@interface TTSVBSiriTTSTrainerSession : NSObject

@property (retain, nonatomic) SiriTTSTrainerSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *siriTrainingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;

- (id)init;
- (void).cxx_destruct;
- (id)getAllAvailableLocales;
- (id)_replyQueue:(id)a0;
- (void)uninstallAsset:(id)a0;
- (void)cancelTask:(id)a0 replyOnQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelTaskWithID:(id)a0 replyOnQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)discardTrainingTasksReplyOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchTrainingScriptsWithLocaleID:(id)a0 scriptType:(id)a1 replyOnQueue:(id)a2 completion:(id /* block */)a3;
- (void)getAllTasksReplyOnQueue:(id)a0 statusHandler:(id /* block */)a1;
- (void)getTaskByID:(id)a0 replyOnQueue:(id)a1 statusHandler:(id /* block */)a2;
- (void)getTasksByIDs:(id)a0 replyOnQueue:(id)a1 statusHandler:(id /* block */)a2;
- (void)installAsset:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)installableTrainingAssetsForLocaleID:(id)a0;
- (id)installedTrainingAssetsForLocaleID:(id)a0;
- (void)startTraining:(id)a0 replyOnQueue:(id)a1 trainingStartedHandler:(id /* block */)a2;

@end
