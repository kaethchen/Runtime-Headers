@class NSArray;

@interface CKMarkNotificationsReadOperation : CKOperation

@property (copy, nonatomic) NSArray *notificationIDs;
@property (copy, nonatomic) id /* block */ markNotificationsReadCompletionBlock;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithNotificationIDsToMarkRead:(id)a0;

@end
