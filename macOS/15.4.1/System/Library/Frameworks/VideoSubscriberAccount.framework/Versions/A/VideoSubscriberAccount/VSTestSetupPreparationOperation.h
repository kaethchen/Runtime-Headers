@class NSOperationQueue, NSArray;

@interface VSTestSetupPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSArray *errors;

- (id)init;
- (void).cxx_destruct;
- (void)addError:(id)a0;
- (void)executionDidBegin;

@end
