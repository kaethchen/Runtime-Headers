@class NSString, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, SMYaaActionDelegate;

@interface SMNYaaAction : SMNAction {
    int fd;
    BOOL hasFinishedFile;
    unsigned long long accumulatedSizeFromStream;
    unsigned long long totalReportedSize;
    unsigned long long totalFileSize;
}

@property int compressionAlgorithm;
@property unsigned long long compressionBlockSize;
@property BOOL receivedEOAMarker;
@property (retain) NSString *sourcePath;
@property (retain) NSString *requestedFilename;
@property (retain) NSString *destinationPath;
@property (copy) NSString *destinationRoot;
@property (retain) NSString *restartPoint;
@property (retain) NSMutableSet *failedPaths;
@property (retain) NSSet *ignoreFailedPathsRegex;
@property (retain) NSSet *excludedPathsSet;
@property (retain) NSObject<OS_dispatch_queue> *resumeQueue;
@property void *compressionStream;
@property (retain) NSString *errorPath;
@property (retain) NSString *lastPathReceived;
@property (weak) NSObject<SMYaaActionDelegate> *callbackDelegate;
@property (copy) id /* block */ usernameConversionBlock;
@property (copy) id /* block */ groupnameConversionBlock;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;
+ (BOOL)streamsResults;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)requestPayload;
- (id)initWithSource:(id)a0 andDestination:(id)a1 andRestartPoint:(id)a2 andExcludedPaths:(id)a3 andOptions:(id)a4;
- (id)selectiveDescription;
- (BOOL)receiveResultOnFd:(int)a0 errorIsFatal:(BOOL *)a1;
- (BOOL)sendResultOnFd:(int)a0;
- (BOOL)_readCompletelyFromFd:(int)a0 buffer:(void *)a1 length:(unsigned long long)a2;
- (BOOL)_writeCompletelyToFd:(int)a0 buffer:(const void *)a1 length:(unsigned long long)a2;
- (void)abortSendingStream;
- (void)extractEntryBeginCallback:(const struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; } x0; unsigned int x1; } x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9[2]; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned char x13[4]; unsigned char x14[20]; unsigned char x15[32]; char x16[1024]; char x17[1024]; } *)a0 overrides:(struct { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a1;
- (void)extractEntryProgressCallback:(const struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; } x0; unsigned int x1; } x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9[2]; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned char x13[4]; unsigned char x14[20]; unsigned char x15[32]; char x16[1024]; char x17[1024]; } *)a0;
- (void)processACL:(struct { int x0; unsigned long long x1; unsigned long long x2; int x3; char x4[256]; } *)a0;
- (void)receivedEOA;
- (BOOL)shouldPreserveProtectionClassesForDestinationPath:(id)a0;
- (BOOL)shouldSkip:(const char *)a0 ofType:(int)a1;

@end
