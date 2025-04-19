@class NSXPCConnection;

@interface LNDaemonConnection : LNConnection

@property (retain, nonatomic) NSXPCConnection *mediatorXPCConnection;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (BOOL)refreshWithOptions:(id)a0;

@end
