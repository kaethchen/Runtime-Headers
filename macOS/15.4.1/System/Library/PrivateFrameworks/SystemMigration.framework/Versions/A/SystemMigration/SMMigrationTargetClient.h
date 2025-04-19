@class NSXPCConnection;

@interface SMMigrationTargetClient : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic) unsigned long long state;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (id)daemon;
- (BOOL)canStartMigration;
- (void)daemonDidGetError:(id)a0;

@end
