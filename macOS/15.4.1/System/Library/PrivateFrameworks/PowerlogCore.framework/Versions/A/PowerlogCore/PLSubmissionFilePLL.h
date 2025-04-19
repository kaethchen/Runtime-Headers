@interface PLSubmissionFilePLL : PLSubmissionFile

@property BOOL isEnergyTasking;

- (id)fileExtension;
- (id)fileType;
- (void)flush;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (void)emitFileExists:(BOOL)a0;
- (void)emitCopyResult:(BOOL)a0;
- (id)baseCADictionary;
- (BOOL)copyAndPrepareLog;
- (BOOL)copyArchiveAtPath:(id)a0 to:(id)a1;
- (BOOL)copyLastArchiveToPath:(id)a0;
- (BOOL)copyPowerlogToPath:(id)a0;
- (BOOL)copyUpgradePowerlogToPath:(id)a0;
- (void)emitDecompressionResult:(BOOL)a0;
- (void)emitPreparationResult:(BOOL)a0;
- (void)generateSubmissionTagForCurrentLog;
- (void)logSubmissionSizeToAnalytics:(unsigned long long)a0 withUncompressedSize:(unsigned long long)a1;
- (BOOL)prepareDatabaseAtPath:(id)a0;
- (id)updateSubmissionTagWithConnection:(id)a0;

@end
