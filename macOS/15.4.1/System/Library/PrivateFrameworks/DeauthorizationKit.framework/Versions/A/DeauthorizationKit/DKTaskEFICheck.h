@interface DKTaskEFICheck : DKTask

+ (BOOL)efiPasswordExists;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;

@end
