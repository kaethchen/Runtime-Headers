@class NSString;

@interface CADStateDumpModule : NSObject <CADModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (id)_storeTypeStringFromType:(int)a0;
- (void)registerForStateCapture;

@end
