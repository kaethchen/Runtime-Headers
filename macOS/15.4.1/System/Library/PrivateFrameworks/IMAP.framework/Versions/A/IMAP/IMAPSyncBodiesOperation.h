@class IMAPDownloadCache, NSOrderedSet, IMAPTaskManager;
@protocol IMAPSyncBodiesOperationDelegate, IMAPMessageDataSource;

@interface IMAPSyncBodiesOperation : IMAPNetworkTaskOperation

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;
@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly, weak, nonatomic) id<IMAPSyncBodiesOperationDelegate> delegate;
@property (retain, nonatomic) IMAPDownloadCache *downloadCache;
@property (readonly, copy, nonatomic) NSOrderedSet *messages;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxName:(id)a0;
- (id)initWithMessages:(id)a0 dataSource:(id)a1 taskManager:(id)a2 downloadCache:(id)a3 delegate:(id)a4;

@end
