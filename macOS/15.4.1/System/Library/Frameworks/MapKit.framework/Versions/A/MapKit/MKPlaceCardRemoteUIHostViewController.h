@class NSString, _EXHostViewControllerSession, NSXPCInterface, NSXPCConnection;
@protocol MKPlaceCardContentSizeDelegate;

@interface MKPlaceCardRemoteUIHostViewController : _EXHostViewController <_EXHostViewControllerDelegate> {
    NSString *_sceneIdentifier;
    NSXPCInterface *_remoteObjectInterface;
    double _preferredWidth;
    _EXHostViewControllerSession *_session;
    NSXPCConnection *_connection;
}

@property (weak, nonatomic) id<MKPlaceCardContentSizeDelegate> placeCardContentSizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)_configureConnection:(id)a0;
- (long long)_mapkit_userInterfaceStyle;
- (void)_resolvePreferredContentSizeIfNeeded;
- (void)_startSession;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (id)initWithSceneIdentifier:(id)a0 remoteObjectInterface:(id)a1 placeholderView:(id)a2;

@end
