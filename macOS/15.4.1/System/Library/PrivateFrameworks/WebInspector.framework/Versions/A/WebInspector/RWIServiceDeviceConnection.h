@class NSString, RWIServiceLockdownConnection;

@interface RWIServiceDeviceConnection : RWIServiceConnection <RWIServiceConnectionDelegate> {
    RWIServiceLockdownConnection *_connectionToRelay;
    RWIServiceLockdownConnection *_connectionToNotificationProxy;
    long long _reconnectToRelayAttemptCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)device;
- (void)sendMessage:(id)a0;
- (BOOL)isConnected;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (id)loggingIdentifier;
- (void)_closeConnection:(id)a0;
- (id)_bestAvailableMobileDeviceConnection;
- (id)_bestAvailableMobileDeviceConnectionIgnoringFailedConnection:(id)a0;
- (void)_fallbackToNextMobileDeviceConnectionForLockdownConnection:(id)a0;
- (BOOL)_ownsConnection:(id)a0;
- (void)_startConnectionToNotificationProxy:(id)a0;
- (void)_startConnectionToRelay:(id)a0;
- (void)_startServicesOnBestConnection;
- (void)_startServicesOnConnection:(id)a0;
- (id)activeLockdownConnections;
- (void)closeInternal;
- (void)mobileDeviceAdded:(id)a0;
- (void)mobileDeviceRemoved:(id)a0;
- (void)serviceConnectionDidClose:(id)a0;
- (void)serviceConnectionEstablished:(id)a0;
- (void)webInspectorServiceDisabled;
- (void)webInspectorServiceEnabled;
- (void)wirelessWasDisabled;

@end
