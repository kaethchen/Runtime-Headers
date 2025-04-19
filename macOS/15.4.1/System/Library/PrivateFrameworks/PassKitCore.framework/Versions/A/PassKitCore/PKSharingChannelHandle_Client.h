@class NSString, PKXPCService;

@interface PKSharingChannelHandle_Client : PKSharingChannelHandle <PKSharingChannelServiceExportedInterface_Client, PKXPCServiceDelegate> {
    PKXPCService *_remoteService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_transportIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createHandleForDescriptor:(id)a0 queue:(id)a1;
+ (void)descriptorsForAccountDevices:(id /* block */)a0;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (id)_initWithQueue:(id)a0;
- (id)_fetchTransportIdentifier;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)attachWithCompletion:(id /* block */)a0;
- (void)closeWithCompletion:(id /* block */)a0;
- (void)didReceiveMessages:(id)a0 reply:(id /* block */)a1;
- (void)didReceiveUpdatedTransportIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchHandleTransferToken:(id /* block */)a0;
- (void)invalidateFromRemoteWithReply:(id /* block */)a0;
- (void)invalidateWithRemoteWithCompletion:(id /* block */)a0;
- (void)markMessageAsHandled:(id)a0;
- (void)relinquishWithCompletion:(id /* block */)a0;
- (void)remoteDeviceInformation:(id /* block */)a0;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)startProximityAdvertisementOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)startProximityDetectionForAdvertisement:(id)a0 completion:(id /* block */)a1;
- (id)transportIdentifier;

@end
