@class UNDockConnection, NSLock, NSXPCConnection;
@protocol UNUninstallClientDelegate;

@interface UNUninstallClient : NSObject

@property (retain, nonatomic) id<UNUninstallClientDelegate> delegate;
@property (retain, nonatomic) UNDockConnection *dockConnection;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSLock *connectionLock;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_setupConnection;
- (BOOL)abortRequest:(id)a0;
- (void)completedUninstallOfBundlePaths:(id)a0;
- (BOOL)queueRequest:(id)a0 error:(id *)a1;
- (BOOL)queueRequest:(id)a0 withPriority:(long long)a1 error:(id *)a2;
- (void)uninstallRequest:(id)a0 didFailWithError:(id)a1;
- (void)uninstallRequest:(id)a0 didMakeProgress:(int)a1;
- (void)uninstallRequestCannotBeAborted:(id)a0;
- (void)uninstallRequestDidBegin:(id)a0;
- (void)uninstallRequestDidFinish:(id)a0;
- (int)uninstallablityOfFileAtURL:(id)a0;

@end
