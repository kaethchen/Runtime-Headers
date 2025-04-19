@interface OSICopyTemplateElement : OSIInstallQueueElement

@property unsigned long long templateFileCount;
@property unsigned long long filesCopied;

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_restrictInstallerCompatibility;
- (BOOL)_createFirmlinksWithError:(id *)a0;
- (BOOL)_installDataTemplateWithError:(id *)a0;
- (BOOL)_operation:(unsigned int)a0 withSource:(id)a1 destination:(id)a2 destinationFolderName:(id)a3 error:(id *)a4;
- (BOOL)_propagateUserTemplateAttributes;
- (void)_updateFilesCopiedCount:(long long)a0;
- (double)estimatedTimeToComplete;

@end
