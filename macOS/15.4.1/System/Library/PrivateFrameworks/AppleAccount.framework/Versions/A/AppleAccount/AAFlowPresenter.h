@class NSXPCListener, NSString;

@interface AAFlowPresenter : NSObject <NSXPCListenerDelegate, AAFlowPresenterProtocol, AAFlowPresenterHostProtocol>

@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ presentationCompletion;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_callCompletionBlockWithError:(id)a0;
- (void)flowFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (void)launchProcessWithUserInfo:(id)a0;

@end
