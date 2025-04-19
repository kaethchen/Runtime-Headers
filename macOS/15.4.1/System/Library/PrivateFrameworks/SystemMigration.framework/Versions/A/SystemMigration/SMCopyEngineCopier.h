@class SMPathSizer, SMCopyEngine, NSString, NSMutableSet, NSDate, NSURL;

@interface SMCopyEngineCopier : NSObject

@property unsigned long long lastSizeUpdate;
@property unsigned long long accumulatedBytesCopied;
@property unsigned long long lastDeltaSinceAccumulatedBytesUpdated;
@property (retain) SMPathSizer *pathSizer;
@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;
@property BOOL isParentExpectingProgress;
@property double transferRate;
@property (retain) NSDate *startTime;
@property (weak) SMCopyEngine *engine;
@property (readonly) NSURL *sourcePath;
@property (retain) NSURL *relativeSourcePath;
@property (readonly) NSURL *destinationPath;
@property (retain) NSURL *relativeDestinationPath;
@property (readonly) NSURL *sandboxedDestinationPath;
@property (readonly) NSURL *destinationPathConsideringSandbox;
@property unsigned long long copySize;
@property unsigned long long copyFileCount;
@property (retain) id associatedObject;
@property (retain) NSString *errorString;
@property BOOL tracksCompletedPaths;

+ (id)keyPathsForValuesAffectingDestinationPath;
+ (id)keyPathsForValuesAffectingSandboxedDestinationPath;
+ (id)keyPathsForValuesAffectingSourceURL;

- (id)description;
- (BOOL)run;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (BOOL)shouldContinue;
- (BOOL)finallyWithErrorOccured:(BOOL)a0;
- (void)finishedFileAtCPath:(const char *)a0;
- (void)finishedFileAtPath:(id)a0;
- (id)initWithCopyEngine:(id)a0;
- (BOOL)postProcessReturningError:(id *)a0;
- (BOOL)preProcessReturningError:(id *)a0;
- (BOOL)processReturningError:(id *)a0;
- (void)setCopySize:(unsigned long long)a0 andCount:(unsigned long long)a1;
- (void)sizeCompletedUpdate:(unsigned long long)a0;

@end
