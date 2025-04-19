@class NSXPCConnection;

@interface IsolatedCoreAudioUseCaseConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int pid;
@property (nonatomic) unsigned int useCaseID;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;

@end
