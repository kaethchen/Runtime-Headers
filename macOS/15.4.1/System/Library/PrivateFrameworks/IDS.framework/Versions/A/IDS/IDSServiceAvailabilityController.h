@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleServiceMonitorNotification:(id)a0;
- (BOOL)_isValidServiceType:(id)a0;
- (void)_postNotificationForService:(id)a0 availability:(long long)a1;
- (void)_startListeningToMonitor:(id)a0;
- (void)_stopListeningToMonitor:(id)a0;
- (BOOL)addListenerID:(id)a0 forService:(id)a1;
- (long long)availabilityForListenerID:(id)a0 forService:(id)a1;
- (id)containerForService:(id)a0 create:(BOOL)a1;
- (BOOL)hasListenerID:(id)a0 forService:(id)a1;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;

@end
