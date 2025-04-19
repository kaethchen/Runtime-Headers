@class NSXPCListener, NSString, NSXPCConnection, NSTimer, NSObject;
@protocol OS_dispatch_queue, ASWebAuthenticationSessionRequestServing, _ASWebAuthenticationSessionRequestHandling;

@interface ASWebAuthenticationSessionRequestClient : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCListener *_requestListener;
    NSXPCConnection *_serverConnection;
    id<ASWebAuthenticationSessionRequestServing> _requestServer;
    id<_ASWebAuthenticationSessionRequestHandling> _requestHandler;
    BOOL _isEstablishingConnection;
    NSTimer *_isEstablishingConnectionTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)fulfillRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;
- (id)initWithRequestServer:(id)a0 requestHandler:(id)a1;
- (void)listenForRequests;

@end
