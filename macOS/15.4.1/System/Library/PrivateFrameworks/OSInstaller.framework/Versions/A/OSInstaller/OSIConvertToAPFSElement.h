@class NSTimer;

@interface OSIConvertToAPFSElement : OSIInstallQueueElement

@property (retain) NSTimer *conversionTimer;
@property double timeSinceLastUpdate;
@property double conversionElapsedTime;
@property float currentProgress;
@property BOOL didRunTimer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startTimer;
- (id)operationName;
- (void)endTimer;
- (void)updateProgress;
- (BOOL)runReturningError:(id *)a0;
- (void)manageProgress:(float)a0;
- (BOOL)convertToAPFS:(id)a0 withConvertedDisk:(id *)a1 prebootPath:(id)a2 withError:(id *)a3;
- (BOOL)copyAPFSPreBootFiles:(id)a0 destFolder:(id)a1 apfsUUID:(id)a2;
- (id)createBootFilesFolderReturningPath:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)isValidAPFSPreBootFolder:(id)a0;
- (void)reportData:(id)a0 toInstallerDiagnosticsKey:(long long)a1;

@end
