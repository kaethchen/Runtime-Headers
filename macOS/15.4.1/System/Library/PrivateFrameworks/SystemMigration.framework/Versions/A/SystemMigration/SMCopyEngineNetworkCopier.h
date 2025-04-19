@class NSURL, NSString, SMNetworkSourceProxy;

@interface SMCopyEngineNetworkCopier : SMCopyEngineFileCopier <SMYaaActionDelegate> {
    NSURL *absoluteBaseSourcePath;
    NSURL *absoluteDestinationBasePath;
    long long operationCompletedSize;
    long long currentFileCompletedSize;
    NSString *lastSkippedFile;
    BOOL _supportsLogicalSizing;
}

@property (retain) SMNetworkSourceProxy *proxy;
@property BOOL rosvSource;

- (void).cxx_destruct;
- (BOOL)copyFrom:(id)a0 relativeFrom:(id)a1 to:(id)a2 error:(id *)a3;
- (void)updateCompletedFilePermissions:(id)a0;
- (void)bomCopierCopyFileFinished:(struct _BOMCopier { } *)a0 filePath:(const char *)a1 type:(int)a2 totalSize:(long long)a3 result:(int)a4;
- (void)bomCopierCopyFileUpdate:(struct _BOMCopier { } *)a0 filePath:(const char *)a1 totalSizeCopied:(long long)a2;
- (void)bomCopierEncounteredFatalError:(struct _BOMCopier { } *)a0 message:(const char *)a1;
- (void)bomCopierEncounteredFatalFileError:(struct _BOMCopier { } *)a0 atPath:(const char *)a1 error:(int)a2;
- (int)bomCopierEncounteredFileError:(struct _BOMCopier { } *)a0 atPath:(const char *)a1 error:(int)a2;
- (id)initWithProxy:(id)a0 rosvSource:(BOOL)a1;
- (BOOL)processReturningError:(id *)a0;
- (void)translateUID:(unsigned int *)a0 andGID:(unsigned int *)a1;
- (void)yaaAction:(id)a0 finishedFileAtPath:(id)a1;
- (void)yaaAction:(id)a0 receivedDataOfSize:(unsigned long long)a1;

@end
