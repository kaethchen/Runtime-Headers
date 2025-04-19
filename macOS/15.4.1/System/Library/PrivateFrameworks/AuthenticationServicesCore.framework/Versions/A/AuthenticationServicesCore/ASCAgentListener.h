@class NSString, NSXPCListener, _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector;
@protocol ASPublicKeyCredentialManagerInterface;

@interface ASCAgentListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    id<ASPublicKeyCredentialManagerInterface> _publicKeyCredentialManager;
}

@property (retain, nonatomic) _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector *signInEventCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithPublicKeyCredentialManager:(id)a0;

@end
