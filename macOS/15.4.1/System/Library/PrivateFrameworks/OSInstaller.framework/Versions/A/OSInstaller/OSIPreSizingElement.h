@interface OSIPreSizingElement : OSIInstallQueueElement {
    unsigned long long _spaceNeededToInstall;
}

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (void)_updateProgressTimer:(id)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 requiredSpaceToInstall:(unsigned long long)a1;

@end
