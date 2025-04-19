@class NSURL, NSString, NSMutableSet;

@interface SMCopyEngineNopCopier : SMCopyEngineFileCopier

@property BOOL fileCopyingMode;
@property (retain, nonatomic) NSURL *destinationSandboxURL;
@property (retain, nonatomic) NSString *sourceRelativePath;
@property (retain, nonatomic) NSURL *finalDestinationURL;
@property (retain, nonatomic) NSMutableSet *failedRelativePaths;
@property BOOL skipPreflight;
@property BOOL sourceIsTimeMachine;
@property BOOL overwriteDestination;
@property BOOL supportResumption;

- (id)init;
- (void).cxx_destruct;
- (BOOL)doOperation:(unsigned int)a0 from:(id)a1 to:(id)a2 error:(id *)a3;
- (id)initWithCopyEngine:(id)a0;
- (BOOL)processReturningError:(id *)a0;
- (void)removeDestinationSandbox;
- (BOOL)shouldSkipFileAtPath:(id)a0;

@end
