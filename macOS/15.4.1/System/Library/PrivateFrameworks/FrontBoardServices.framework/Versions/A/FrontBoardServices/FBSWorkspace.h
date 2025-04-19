@class BSServiceConnectionEndpointMonitor, NSArray, NSString, FBSSerialQueue, NSMutableDictionary, NSObject, BSServiceConnectionEndpoint;
@protocol FBSWorkspaceDelegate, BSServiceDispatchingQueue, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding> {
    FBSSerialQueue *_callOutQueue;
    id<BSServiceDispatchingQueue> _serviceQueue;
    id<FBSWorkspaceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_identifierToScenesSource;
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;
}

@property (readonly, nonatomic) id<FBSWorkspaceDelegate> delegate;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint;
@property (readonly, copy, nonatomic) NSArray *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerBlockForWorkspaceCreation:(id /* block */)a0;
+ (id)_sharedWorkspaceIfExists;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)defaultService;
- (id)_callOutQueue;
- (void)_calloutQueue_executeCalloutFromSource:(id)a0 withBlock:(id /* block */)a1;
- (void)_queue_registerSource:(id)a0;
- (void)_queue_unregisterSource:(id)a0;
- (void)_registerSource:(id)a0;
- (void)_registerSourceEndpoint:(id)a0;
- (void)_registerSourcePeer:(id)a0;
- (id)defaultServiceForEndpoint:(id)a0;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)initWithSerialQueue:(id)a0;
- (void)monitor:(id)a0 didReceiveEndpoint:(id)a1;
- (void)monitor:(id)a0 willLoseEndpoint:(id)a1;
- (void)requestDestructionOfScene:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestSceneCreationWithIdentifier:(id)a0 initialClientSettings:(id)a1 completion:(id /* block */)a2;
- (void)requestSceneCreationWithInitialClientSettings:(id)a0 completion:(id /* block */)a1;
- (void)requestSceneFromEndpoint:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)sceneWithIdentifier:(id)a0;
- (id)serviceForEndpoint:(id)a0 withIdentifier:(id)a1;
- (id)serviceQueue;

@end
