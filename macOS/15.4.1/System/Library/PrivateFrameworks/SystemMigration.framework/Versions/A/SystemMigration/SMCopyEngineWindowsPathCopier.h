@class NSString;

@interface SMCopyEngineWindowsPathCopier : SMCopyEngineCopier <SMNWindowsCopyPathActionDelegate>

@property unsigned long long quantityDataReceived;
@property (retain) NSString *expandedPath;
@property (retain) NSString *windowsSourcePath;

- (id)description;
- (void).cxx_destruct;
- (void)copyAction:(id)a0 finishedFile:(id)a1 length:(unsigned long long)a2;
- (void)copyAction:(id)a0 updatedFile:(id)a1 partialLength:(unsigned long long)a2;
- (BOOL)copyActionShouldContinue:(id)a0;
- (BOOL)preProcessReturningError:(id *)a0;
- (BOOL)processReturningError:(id *)a0;

@end
