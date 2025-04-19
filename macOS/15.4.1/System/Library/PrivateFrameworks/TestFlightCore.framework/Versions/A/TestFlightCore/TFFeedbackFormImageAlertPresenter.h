@class NSMutableArray;

@interface TFFeedbackFormImageAlertPresenter : NSObject

@property (copy) NSMutableArray *pendingAlertPaths;

- (id)init;
- (void).cxx_destruct;
- (void)addErrorForPath:(id)a0;
- (long long)presentBatchedErrorsIfAny;

@end
