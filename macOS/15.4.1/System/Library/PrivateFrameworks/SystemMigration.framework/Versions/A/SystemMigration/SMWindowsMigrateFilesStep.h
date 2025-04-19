@class SMCopyEngine;

@interface SMWindowsMigrateFilesStep : SMEngineStep

@property (retain) SMCopyEngine *fileCopyEngine;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)process;
- (id)prepare;
- (void)copierSuceeded:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (void)setupCopiers;
- (void)setupCopiersForCustomPaths:(id)a0;
- (void)setupFileCopyEngine;

@end
