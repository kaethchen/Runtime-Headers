@class NSData, NSString, NSArray, LOMStateMachine, NSDictionary, NSMutableSet, NSObject, LOMControllerClient;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface LOMControllerRequest : NSObject <LOMRequest> {
    id _identity;
    NSArray *_anchorCertificates;
    NSArray *_ipV6Interfaces;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    LOMControllerClient *_activeConnection;
    LOMStateMachine *_stateMachine;
    id /* block */ _completion;
    NSDictionary *_request;
    NSData *_response;
    NSObject<OS_dispatch_group> *_requestCompletionGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clearActive;
- (void)clearPending;
- (void)execute:(id)a0 completion:(id /* block */)a1;
- (void)executeRequest:(id)a0 addressList:(id)a1 secure:(BOOL)a2 completion:(id /* block */)a3;
- (void)executeRequestForAddress:(id)a0 address:(id)a1 secure:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithAttributes:(id)a0 queue:(id)a1;
- (void)sendWOLPacket;
- (void)setupStateMachine;
- (void)transferData:(BOOL)a0;

@end
