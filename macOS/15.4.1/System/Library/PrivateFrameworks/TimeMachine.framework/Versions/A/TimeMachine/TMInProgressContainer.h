@interface TMInProgressContainer : TMMonoStructure <TMWritableBackupProvider>

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)_containerNameWithDate:(id)a0;
+ (id)annotatedStateAtURL:(id)a0;

- (id)description;
- (long long)refreshFromDisk;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (BOOL)_updateContainerTimestamp:(id *)a0;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (id)deleteFromDiskWithCancelBlock:(id /* block */)a0 error:(id *)a1;
- (id)latestWritableBackupWithState:(unsigned long long)a0;
- (BOOL)prepareForReuse:(id *)a0;
- (BOOL)updateContainerWithDate:(id)a0 error:(id *)a1;

@end
