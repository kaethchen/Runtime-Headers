@class NSXPCConnection, QLFileThumbnailRequest, NSFileCoordinator, NSURL, _EXExtensionProcess, NSOperationQueue, QLThumbnailExtension, RBSAssertion;
@protocol NSFileCoordinationRetainedAccess;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation

@property (retain, nonatomic) QLThumbnailExtension *appex;
@property (retain, nonatomic) _EXExtensionProcess *process;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) QLFileThumbnailRequest *request;
@property (retain, nonatomic) NSFileCoordinator *coordinator;
@property (retain, nonatomic) NSOperationQueue *coordinationQueue;
@property (retain, nonatomic) id<NSFileCoordinationRetainedAccess> fileAccess;
@property (retain, nonatomic) NSURL *accessedURL;
@property (copy, nonatomic) id /* block */ timeoutBlock;
@property (retain, nonatomic) RBSAssertion *assertion;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } finishLock;

- (void).cxx_destruct;
- (void)finish;
- (void)main;
- (void)generate;
- (void)finishWithReply:(id)a0 error:(id)a1;
- (id)initWithAppex:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;

@end
