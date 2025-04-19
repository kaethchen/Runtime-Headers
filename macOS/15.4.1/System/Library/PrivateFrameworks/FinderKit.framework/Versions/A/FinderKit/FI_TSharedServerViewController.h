@class NSString;

@interface FI_TSharedServerViewController : NSNavSharedServerController <TNodeObserverProtocol> {
    BOOL _waitingToEject;
    struct shared_ptr<TNodeObserverCocoaBridge> { struct TNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setRepresentedObject:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateLayout;
- (void)nodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)connectAsButtonClicked:(id)a0;
- (void)connectToSharedServerAs;
- (unsigned int)networkConnectionState;
- (void)nodeObserver:(void *)a0 nodeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 property:(unsigned int)a3;
- (void)nodeObserver:(void *)a0 nodeDeleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)nodeObserver:(void *)a0 openSyncStarted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)screenShareClicked:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })serverNode;
- (void)setNetworkConnectionState:(unsigned int)a0;
- (void)setServerIconAsync:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)startObservingNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)stopObservingNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)updateConnectionState;
- (void)updateConnectionStateAsSharedServer;

@end
