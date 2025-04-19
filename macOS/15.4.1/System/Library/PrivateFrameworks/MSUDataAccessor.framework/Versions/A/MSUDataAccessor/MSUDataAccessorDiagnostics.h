@interface MSUDataAccessorDiagnostics : MSUDataAccessor

- (id)returnDirectoryIfExistsForPath:(id)a0;
- (id)copyPathForPersistentData:(int)a0 error:(id *)a1;
- (id)specialCaseFDRPathForDiagnostics;

@end
