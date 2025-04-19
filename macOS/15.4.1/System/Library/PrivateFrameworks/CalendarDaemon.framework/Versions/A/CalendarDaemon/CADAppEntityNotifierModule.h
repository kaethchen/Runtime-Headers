@class NSString;
@protocol CalAppEntityNotifier;

@interface CADAppEntityNotifierModule : NSObject <CADModule> {
    id<CalAppEntityNotifier> _notifier;
    BOOL _isActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (id)initWithAppEntityNotifier:(id)a0;

@end
