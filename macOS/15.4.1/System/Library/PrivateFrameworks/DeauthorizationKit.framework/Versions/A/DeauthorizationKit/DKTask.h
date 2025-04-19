@interface DKTask : NSObject

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;
- (double)estimatedTimeOfCompletion;

@end
