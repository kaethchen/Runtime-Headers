@class NSString, NSXPCConnection, SiriAnalyticsXPCConnectionEntitlements, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsXPCConnectionHandlerDelegate;

@interface SiriAnalyticsXPCConnectionHandler : NSObject <SiriAnalyticsXPCService> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCConnectionHandlerDelegate> _delegate;
    struct { unsigned int val[8]; } _auditToken;
    SiriAnalyticsXPCConnectionEntitlements *_entitlements;
    NSString *_connectionApplicationIdentifier;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (readonly) SiriAnalyticsXPCConnectionEntitlements *entitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)vendSandboxExtensionWithResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)createTag:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchKillSwitchEnabledWithCompletion:(id /* block */)a0;
- (oneway void)fetchLogicalClocksWithCompletion:(id /* block */)a0;
- (oneway void)fetchStateForPluginWithCompletion:(id /* block */)a0;
- (oneway void)fetchTags:(id /* block */)a0;
- (id)initWithConnection:(id)a0 entitlementsKey:(id)a1 queue:(id)a2 delegate:(id)a3;
- (id)mapToAnnotatedMessage:(id)a0;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishUnorderedMessages:(id)a0 topic:(id)a1 completion:(id /* block */)a2;
- (oneway void)purgeStagedMessagesWithCompletion:(id /* block */)a0;
- (oneway void)resetLogicalClockWithCompletion:(id /* block */)a0;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)runPipelineWithCompletion:(id /* block */)a0;
- (oneway void)saveState:(id)a0 forPluginWithCompletion:(id /* block */)a1;
- (oneway void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)setKillSwitchEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)vendResource:(long long)a0 readonly:(BOOL)a1 completion:(id /* block */)a2;

@end
