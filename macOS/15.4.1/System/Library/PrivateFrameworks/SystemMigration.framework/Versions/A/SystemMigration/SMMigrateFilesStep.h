@class SMCopyEngine, NSArray;

@interface SMMigrateFilesStep : SMEngineStep <SMPathsPreliminaryPathGroupSizeCallback>

@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL kextCacheNeedsUpdate;
@property unsigned long long prelimFileCount;
@property (readonly) NSArray *copyPaths;

+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withFileGroupings:(id)a1 withUsersToTransfer:(id)a2;
+ (BOOL)shouldCopyNonSystemReceiptsForUpgrade;

- (void).cxx_destruct;
- (void)cancel;
- (id)process;
- (id)prepare;
- (void)dedupeWallpaper;
- (void)_runCopier;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (BOOL)engineStepSupportsResumption;
- (id)postProcess;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (id)resumeProcess;
- (BOOL)setupCopiesForFileGroups;
- (void)setupCopyNonSystemReceiptsForUpgrade;
- (void)setupFileCopyEngine;

@end
