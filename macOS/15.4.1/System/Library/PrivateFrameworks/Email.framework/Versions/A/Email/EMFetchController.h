@class EMRemoteConnection;

@interface EMFetchController : NSObject

@property (retain) EMRemoteConnection *connection;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)diagnosticInformation;
- (id)initWithRemoteConnection:(id)a0;
- (void)performFetchForOTC;
- (void)performFetchOfType:(int)a0;
- (void)performFetchOfType:(int)a0 accounts:(id)a1;
- (void)performFetchOfType:(int)a0 mailboxes:(id)a1;
- (void)setSuppressedContexts:(id)a0;

@end
