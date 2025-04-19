@class NSString, NSArray, SBLDownloadProvidersOperation, SBLFullfillProvidersOperation, NSOperationQueue, SBLPrepareProvidersOperation, SBLReconnectProvidersOperation, NSWindow, NSProgress;
@protocol SBLShareKitManagerProgressDelegate, SBLShareKitManagerReconnectDelegate;

@interface SBLShareKitSession : NSObject

@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSArray *providers;
@property (retain) NSOperationQueue *operationQueue;
@property BOOL sessionAborted;
@property (retain) SBLPrepareProvidersOperation *prepareOp;
@property (retain) SBLReconnectProvidersOperation *reconnectOp;
@property (retain) SBLDownloadProvidersOperation *downloadOp;
@property (retain) SBLFullfillProvidersOperation *fullfillOp;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (readonly, nonatomic) NSProgress *sessionProgress;
@property (weak, nonatomic) id<SBLShareKitManagerReconnectDelegate> reconnectDelegate;
@property (weak, nonatomic) id<SBLShareKitManagerProgressDelegate> progressDelegate;

+ (id)newSessionWithProviders:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)sessionShutdown;
- (void)cancelProgressRequest;
- (void)operationFinished;
- (void)scheduleProgressWithOptions:(id)a0;
- (void)sessionAbort;
- (void)sessionBegin:(id /* block */)a0;
- (void)sessionPrepare;
- (void)startModalProgress:(id)a0;
- (void)stopModalProgress;

@end
