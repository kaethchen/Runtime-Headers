@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (readonly, nonatomic) BOOL moreComing;
@property (copy, nonatomic) id /* block */ notificationChangedBlock;
@property (copy, nonatomic) id /* block */ fetchNotificationChangesCompletionBlock;

- (void).cxx_destruct;
- (id)initWithPreviousServerChangeToken:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;

@end
