@interface OSIRebuildCachesElement : OSIInstallQueueElement {
    unsigned long long operatingMode;
}

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)a0;
- (id)localizedStatusString;
- (BOOL)_migrateMasterBOMReturningError:(id *)a0;
- (BOOL)_triggerRebuildOfDYLDSharedCacheReturningError:(id *)a0;
- (BOOL)_triggerRebuildOfKernelCache:(id *)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 withMode:(unsigned long long)a1;

@end
