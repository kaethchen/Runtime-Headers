@class _CDContextualChangeRegistration, _CDClientContext, NSDictionary, _CDContextualPredicate, _CDContextualKeyPath, NSObject;
@protocol OS_os_log, OS_dispatch_semaphore;

@interface SunriseSunsetProvider : NSObject {
    NSObject<OS_os_log> *_logHandle;
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    BOOL _sunriseSunsetNotificationEnabled;
    id /* block */ _callbackBlock;
    id /* block */ _duetCallback;
    _CDContextualPredicate *_predicate;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithCallback:(id /* block */)a0;
- (void)unregisterNotification;
- (void)unregisterBlock;
- (id)copySunriseSunsetInfo:(int)a0;
- (id)copySunsetSunriseInfoFromContext;
- (void)registerBlock:(id /* block */)a0;
- (void)updateSunriseSunsetInfo;

@end
