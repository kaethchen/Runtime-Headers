@class NSString;
@protocol SFAirDropClassroomTransferDelegate;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol>

@property (weak, nonatomic) id<SFAirDropClassroomTransferDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (void)transferWithIdentifierWasDeclined:(id)a0 withFailureReason:(unsigned long long)a1;
- (void)updateTransferWithIdentifier:(id)a0 withState:(long long)a1 information:(id)a2 completionHandler:(id /* block */)a3;

@end
