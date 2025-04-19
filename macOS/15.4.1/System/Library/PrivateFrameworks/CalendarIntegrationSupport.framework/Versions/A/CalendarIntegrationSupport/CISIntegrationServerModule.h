@class NSString, _TtC26CalendarIntegrationSupport17IntegrationServer;

@interface CISIntegrationServerModule : NSObject <CADModule> {
    _TtC26CalendarIntegrationSupport17IntegrationServer *server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)catchupSyncRequested;
- (void)regularSyncRequested;

@end
