@interface DKTaskUnregisterAppleIDs : DKTask

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (BOOL)runWithError:(id *)a0;
- (double)estimatedTimeOfCompletion;

@end
