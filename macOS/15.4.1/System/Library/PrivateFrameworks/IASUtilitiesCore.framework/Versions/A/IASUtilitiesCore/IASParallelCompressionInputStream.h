@class NSLock, IASStreamFIFOQueue, NSData;

@interface IASParallelCompressionInputStream : IASInputStream {
    struct { void /* function */ *inSeqProc; void /* function */ *inAbortProc; void *inUserData; void /* function */ *outSeqProc; void /* function */ *outAbortProc; void *outUserData; } _filterIO;
    struct { int algorithm; int direction; int nWorkerThreads; unsigned long long blockSize; int verbosity; } _filterParams;
    struct { unsigned long long inSize; unsigned long long outSize; } _offsets;
}

@property (retain) IASStreamFIFOQueue *filteredDataQueue;
@property (retain) NSLock *stateLock;
@property (retain) NSLock *partialDataLock;
@property (retain) NSData *partialData;
@property (getter=isDecompressing) BOOL decompressing;
@property unsigned long long streamStatus;

- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)close;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (BOOL)forwardSeekingStreamRequiresReads;
- (long long)seekingCapability;

@end
