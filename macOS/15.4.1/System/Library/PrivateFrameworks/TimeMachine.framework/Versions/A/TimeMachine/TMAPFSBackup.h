@interface TMAPFSBackup : TMBackup

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)structurePathComponentPattern;

- (id)description;
- (id)moveUnderURL:(id)a0 newParent:(id)a1 error:(id *)a2;
- (BOOL)setBackupState:(unsigned long long)a0 error:(id *)a1;

@end
