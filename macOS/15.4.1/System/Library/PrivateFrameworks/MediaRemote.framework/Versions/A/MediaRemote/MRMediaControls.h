@class NSXPCListener, NSString, NSXPCConnection, MRMediaControlsConfiguration;

@interface MRMediaControls : NSObject <MRMediaControlsProtocol, NSXPCListenerDelegate> {
    BOOL _shouldObserveRoutingContextUIDChanges;
    unsigned long long _dismissalReason;
    NSString *_tappedCustomRowIdentifier;
    MRMediaControlsConfiguration *_configuration;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) MRMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissHandlerWithReason;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ customRowDidTapHandler;
@property (copy, nonatomic) NSString *routeUID;
@property (nonatomic) double preferredWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_reset;
- (id)initWithConfiguration:(id)a0;
- (void)dismiss;
- (void)present;
- (void)openConnection;
- (void)startPrewarming;
- (unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)a0;
- (void)_audioSessionRoutingContextDidChangeNotification;
- (id)_dismissalReasonString:(unsigned long long)a0;
- (long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)a0;
- (BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)a0;
- (void)_updateAudioSessionRoutingContext;
- (void)addCustomRowWithType:(id)a0 titleOverride:(id)a1 identifier:(id)a2;
- (id)initWithConfiguration:(id)a0 shouldObserveRoutingContextUIDChanges:(BOOL)a1;
- (id)initWithRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)setDismissalReason:(unsigned long long)a0;
- (void)setTappedCustomRowIdentifier:(id)a0;
- (void)stopPrewarming;

@end
