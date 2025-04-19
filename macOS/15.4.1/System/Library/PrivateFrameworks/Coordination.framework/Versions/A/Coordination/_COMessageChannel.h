@class NSString, COMessageChannelRapportTransport;

@interface _COMessageChannel : COMessageChannel <COMessageChannelRapportTransportDelegate> {
    BOOL _activated;
}

@property (retain, nonatomic) COMessageChannelRapportTransport *rapportTransport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_onqueue_deliverDidFailToStartSessionWithMember:(id)a0 consumer:(id)a1 error:(id)a2;
- (void)_onqueue_deliverSuccessfullyStartedSession:(id)a0 withMember:(id)a1 consumer:(id)a2;
- (void)_onqueue_deliverDidFailToStartSessionWithMember:(id)a0 producer:(id)a1 error:(id)a2;
- (void)_onqueue_deliverDidEndDelegateForSession:(id)a0 notice:(id)a1 initiator:(id)a2 error:(id)a3;
- (void)_onqueue_deliverSuccessfullyStartedSession:(id)a0 withResponse:(id)a1 withMember:(id)a2 producer:(id)a3;
- (void)_onqueue_handleCapableCommand:(id)a0 fromMember:(id)a1 callback:(id /* block */)a2;
- (void)_onqueue_handleStartCommand:(id)a0 withMember:(id)a1 callback:(id /* block */)a2;
- (void)_onqueue_handleStopCommand:(id)a0 fromMember:(id)a1 callback:(id /* block */)a2;
- (void)_onqueue_sendRequest:(id)a0 members:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_onqueue_startSessionWithProducer:(id)a0 member:(id)a1;
- (void)_onqueue_startSessionWithProducer:(id)a0 member:(id)a1 request:(id)a2;
- (Class)_payloadClassFromType:(id)a0;
- (id)_payloadTypeFromClass:(Class)a0;
- (void)addGroupedHomeKitIdentifiers:(id)a0;
- (void)addSessionConsumerWithSubTopic:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;
- (void)addSessionProducerWithSubTopic:(id)a0 delegate:(id)a1 dispatchQueue:(id)a2;
- (void)broadcastRequest:(id)a0 recipientsCallback:(id /* block */)a1 responseCompletionHandler:(id /* block */)a2;
- (void)didFindMember:(id)a0;
- (void)didLoseMember:(id)a0;
- (void)didReceiveRequest:(id)a0 from:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)groupedHomeKitIdentifiers;
- (id)initWithTopic:(id)a0 cluster:(id)a1 manualGrouping:(BOOL)a2;
- (void)registerHandler:(id /* block */)a0 forRequestClass:(Class)a1;
- (void)registerMemberFoundHandler:(id /* block */)a0;
- (void)registerMemberLostHandler:(id /* block */)a0;
- (void)removeGroupedHomeKitIdentifiers:(id)a0;
- (void)sendRequest:(id)a0 members:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)sendRequest:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
