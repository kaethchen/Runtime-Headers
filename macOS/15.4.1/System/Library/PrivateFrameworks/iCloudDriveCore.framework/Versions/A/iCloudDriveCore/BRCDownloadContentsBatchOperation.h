@interface BRCDownloadContentsBatchOperation : BRCTransferBatchOperation

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)addDownload:(id)a0;
- (id)createActivity;
- (id)actionPrettyName;
- (id)initWithSyncContext:(id)a0 sessionContext:(id)a1 group:(id)a2 callBackQueueTarget:(id)a3;
- (void)mainWithTransfers:(id)a0;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (id)transferredObjectsPrettyName;

@end
