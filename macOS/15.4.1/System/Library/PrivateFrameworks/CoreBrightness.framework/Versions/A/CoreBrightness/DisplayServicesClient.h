@class BrightnessSystemClientInternal, NSObject;
@protocol OS_os_log;

@interface DisplayServicesClient : NSObject {
    BrightnessSystemClientInternal *bsci;
    NSObject<OS_os_log> *_logHandle;
    id /* block */ _displayNotificationBlock;
    id /* block */ _propertyNotificationBlock;
}

- (void)dealloc;
- (id)init;
- (BOOL)setProperty:(id)a0 withKey:(id)a1 andDisplay:(unsigned long long)a2;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (id)copyPropertyForKey:(id)a0 andDisplay:(unsigned long long)a1 withParameter:(id)a2;
- (void)registerDisplayNotificationCallbackBlock:(id /* block */)a0;
- (void)registerNotificationForKey:(id)a0;
- (void)registerNotificationForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (void)registerNotificationForKeys:(id)a0;
- (void)registerNotificationForKeys:(id)a0 andDisplay:(unsigned long long)a1;
- (void)registerPropertyNotificationCallbackBlock:(id /* block */)a0;
- (BOOL)setProperty:(id)a0 withKey:(id)a1;
- (void)unregisterDisplayNotificationBlock;
- (void)unregisterNotificationForKey:(id)a0;
- (void)unregisterNotificationForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (void)unregisterNotificationForKeys:(id)a0;
- (void)unregisterNotificationForKeys:(id)a0 andDisplay:(unsigned long long)a1;
- (void)unregisterPropertyNotificationBlock;

@end
