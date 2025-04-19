@interface WFDatabaseMergePolicy : NSMergePolicy

- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;

@end
