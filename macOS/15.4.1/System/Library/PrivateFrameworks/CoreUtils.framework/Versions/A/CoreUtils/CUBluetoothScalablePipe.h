@class NSUUID, NSString, CUWriteRequest, CUReadRequest, CBScalablePipeManager, CBScalablePipe, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothScalablePipe : NSObject <CUReadWriteRequestable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    struct channel { } *_btChannel;
    BOOL _btEndpointRegistering;
    BOOL _btEndpointRegistered;
    int _btPeerHostState;
    BOOL _btPeerKVORegistered;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    struct channel_ring_desc { } *_btReadRing;
    char *_btReadLeftoverBuf;
    unsigned long long _btReadLeftoverMaxLen;
    char *_btReadLeftoverPtr;
    char *_btReadLeftoverEnd;
    struct channel_ring_desc { } *_btWriteRing;
    int _channelFD;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSuspended;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSUUID *peerIdentifier;
@property (readonly, nonatomic) int peerHostState;
@property (copy, nonatomic) id /* block */ peerHostStateChangedHandler;
@property (nonatomic) int priority;
@property (readonly, nonatomic) int state;
@property (copy, nonatomic) id /* block */ stateChangedHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_abortReadsWithError:(id)a0;
- (void)_abortWritesWithError:(id)a0;
- (void)_completeReadRequest:(id)a0 error:(id)a1;
- (void)_completeWriteRequest:(id)a0 error:(id)a1;
- (void)_prepareReadRequest:(id)a0;
- (BOOL)_prepareWriteRequest:(id)a0 error:(id *)a1;
- (void)_processReads;
- (void)_processWrites;
- (int)_readBytes:(char *)a0 minLen:(unsigned long long)a1 maxLen:(unsigned long long)a2 offset:(unsigned long long *)a3;
- (unsigned long long)_writeBytes:(const char *)a0 length:(unsigned long long)a1;
- (int)_writeIOArray:(struct iovec **)a0 ioCount:(int *)a1;
- (void)readWithRequest:(id)a0;
- (void)writeWithRequest:(id)a0;

@end
