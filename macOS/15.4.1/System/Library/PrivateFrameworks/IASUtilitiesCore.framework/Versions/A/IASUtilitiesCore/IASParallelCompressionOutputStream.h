@class IASStreamFIFOQueue, IASThreadSafeEvent, NSLock, NSData;

@interface IASParallelCompressionOutputStream : IASOutputStream {
    struct { void /* function */ *inSeqProc; void /* function */ *inAbortProc; void *inUserData; void /* function */ *outSeqProc; void /* function */ *outAbortProc; void *outUserData; } _filterIO;
    struct { int algorithm; int direction; int nWorkerThreads; unsigned long long blockSize; int verbosity; } _filterParams;
    struct { unsigned long long inSize; unsigned long long outSize; } _offsets;
}

@property (retain) IASStreamFIFOQueue *filteredDataQueue;
@property (retain) IASThreadSafeEvent *userSentZeroLengthDataToWrite;
@property (retain) NSLock *stateLock;
@property (retain) NSLock *partialDataLock;
@property (retain) NSData *partialData;
@property unsigned long long streamStatus;
@property (nonatomic) int compressionLevel;

- (void).cxx_destruct;
- (void)close;
- (BOOL)hasSpaceAvailable;
- (void)open;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1 shouldChangeCloseBehavior:(BOOL)a2;

@end
