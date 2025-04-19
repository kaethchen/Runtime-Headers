@interface OSIEraseInstallElement : OSIInstallQueueElement

+ (id)disksForDiskUUID:(id)a0 fromDisks:(id)a1;
+ (BOOL)performEraseInstallWithTarget:(id)a0 withOptionalVolumeUUIDToErase:(id)a1 withError:(id *)a2;
+ (id)volumesToRemove:(id)a0 exemptingTarget:(id)a1;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end
