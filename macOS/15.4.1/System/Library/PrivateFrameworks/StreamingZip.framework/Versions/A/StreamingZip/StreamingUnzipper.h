@class NSString, NSXPCConnection, StreamingUnzipState, NSError, NSObject;
@protocol OS_dispatch_group, OS_os_transaction, OS_dispatch_queue, StreamingUnzipDelegateProtocol;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol, StreamingFileWriterErrorDelegate> {
    BOOL _hasConnection;
    struct { unsigned int val[8]; } _auditToken;
    long long _sandboxToken;
    void *_decompressionOutputBuffer;
    StreamingUnzipState *_currentState;
    NSObject<OS_os_transaction> *_sessionTransaction;
    int _activeDelegateMethods;
    double _lastExtractionProgressSent;
    NSObject<OS_dispatch_group> *_asyncWorkTrackingGroup;
    NSError *_asyncError;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncErrorLock;
}

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishStreamWithReply:(id /* block */)a0;
- (void)getPidForTestingWithReply:(id /* block */)a0;
- (id)initForClient:(id)a0 connection:(id)a1;
- (void)setActiveDelegateMethods:(int)a0;
- (void)setupUnzipperWithOutputPath:(id)a0 sandboxExtensionToken:(char *)a1 options:(id)a2 withReply:(id /* block */)a3;
- (void)streamingFileWriter:(id)a0 didEncounterError:(id)a1;
- (void)supplyBytes:(id)a0 withReply:(id /* block */)a1;
- (void)suspendStreamWithReply:(id /* block */)a0;
- (void)terminateStreamWithReply:(id /* block */)a0;

@end
