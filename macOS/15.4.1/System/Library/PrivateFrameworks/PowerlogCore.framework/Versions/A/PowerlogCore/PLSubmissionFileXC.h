@interface PLSubmissionFileXC : PLSubmissionFile

- (id)fileExtension;
- (id)fileType;
- (id)initWithConfig:(id)a0;
- (void)submit;
- (BOOL)copyAndPrepareLog;
- (BOOL)copyDatabaseToPath:(id)a0;
- (id)getXCSQLFile;
- (void)obfuscateTimestampsForTable:(id)a0 connection:(id)a1 withOffset:(double)a2;
- (double)randomizedBaseOffset;
- (int)userActionCountForConnection:(id)a0;
- (double)xcodeVersionFromUserActions;

@end
