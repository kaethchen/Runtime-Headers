@interface CKModifyBadgeOperation : CKOperation

@property (nonatomic) unsigned long long badgeValue;
@property (copy, nonatomic) id /* block */ modifyBadgeCompletionBlock;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithBadgeValue:(unsigned long long)a0;

@end
