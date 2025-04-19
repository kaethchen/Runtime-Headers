@class KextAuditIntelBootSession, NSXPCConnection;
@protocol KextAuditXPCClientProtocol;

@interface KextAuditClient : NSObject

@property (retain) NSXPCConnection<KextAuditXPCClientProtocol> *xpcConnection;
@property (retain) KextAuditIntelBootSession *session;

+ (id)client;

- (id)init;
- (void).cxx_destruct;
- (void)newBootSession:(id)a0;
- (int)initializeConnection;
- (void)invalidateBootSession:(id)a0;
- (void)kextLoad:(id)a0;
- (id)updateSession;

@end
