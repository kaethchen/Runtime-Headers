@class NSXPCListenerEndpoint, NSViewController, NSString, _EXExtensionRootViewController, _EXPromise;

@interface _EXUISceneSession : _EXSceneSession <NSXPCListenerDelegate>

@property (retain) NSXPCListenerEndpoint *viewBridgeEndpoint;
@property (retain) _EXPromise *initializationPromise;
@property (retain, nonatomic) _EXExtensionRootViewController *rootViewController;
@property (retain, nonatomic) NSViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0;
- (void)connectToScene:(id)a0;
- (id)makeConfigurationWithParameters:(id)a0;
- (id)makeConnectionResponse;
- (id)makeSceneWithError:(id *)a0;
- (id)viewBridgeEndpoint;

@end
