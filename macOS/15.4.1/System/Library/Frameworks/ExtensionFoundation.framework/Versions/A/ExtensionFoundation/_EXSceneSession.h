@class NSXPCListener, NSUUID, NSXPCConnection, _EXSceneConfiguration, _EXExtension, NSXPCListenerEndpoint, NSString;
@protocol _EXScene;

@interface _EXSceneSession : NSObject <NSXPCListenerDelegate, _EXSceneSessionExtensionXPCProtocol, _EXConnectionHandler>

@property (retain) NSXPCListener *sceneConnectionListener;
@property (retain, nonatomic) id<_EXScene> scene;
@property (weak, nonatomic) NSXPCConnection *sessionXPCConnection;
@property (retain, nonatomic) NSXPCConnection *sceneXPCConnection;
@property (readonly, weak, nonatomic) _EXExtension *extension;
@property (retain) NSUUID *identifier;
@property (copy) _EXSceneConfiguration *configuration;
@property (readonly) NSXPCListenerEndpoint *hostEndpoint;
@property (readonly, nonatomic) BOOL catalystHosted;
@property (readonly, nonatomic) BOOL hasSwiftUIContent;
@property (readonly) unsigned long long signpost;
@property (readonly, copy) NSString *role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)role;
- (id)makeXPCConnectionWithError:(id *)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)initWithExtension:(id)a0;
- (void)connectToScene:(id)a0;
- (void)connectSceneSessionWithRequest:(id)a0 reply:(id /* block */)a1;
- (id)makeConfigurationWithParameters:(id)a0;
- (id)makeConnectionResponse;
- (id)makeSceneWithError:(id *)a0;

@end
