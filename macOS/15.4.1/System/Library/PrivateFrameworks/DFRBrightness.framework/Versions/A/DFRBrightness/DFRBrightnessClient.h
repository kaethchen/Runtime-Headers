@class BrightnessSystemClientInternal, NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface DFRBrightnessClient : NSObject {
    struct __IOHIDEventSystemClient { } *_hidClient;
    struct __IOHIDServiceClient { } *_DFRService;
    NSObject<OS_os_log> *_logHandle;
    NSMutableDictionary *_propertyCache;
    NSObject<OS_dispatch_queue> *_scheduledQueue;
    NSObject<OS_dispatch_queue> *_hidQueue;
    id /* block */ _clientCallbackBlockDisplayState;
    id /* block */ _clientCallbackBlockHarmonyState;
    id /* block */ _displayStateNotificationHandler;
    int _displayStateNotificationToken;
    id /* block */ _coreBrightnessClientCallback;
    BrightnessSystemClientInternal *_coreBrightnessClient;
}

@property (readonly) long long displayState;
@property (readonly) long long harmonyState;

- (void)dealloc;
- (id)init;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)unscheduleWithDispatchQueue:(id)a0;
- (void)flushPropertyCache;
- (int)getDFRDisplayID;
- (BOOL)turnOff;
- (BOOL)_dimToStep:(id)a0 withPeriod:(id)a1 andCoefficient:(id)a2;
- (BOOL)addDFRService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)dimToStep:(long long)a0;
- (BOOL)dimToStep:(long long)a0 withCoefficient:(float)a1;
- (BOOL)dimToStep:(long long)a0 withPeriod:(float)a1;
- (BOOL)dimToStep:(long long)a0 withPeriod:(float)a1 andCoefficient:(float)a2;
- (BOOL)getBurninCounterValue:(unsigned long long *)a0;
- (long long)getDimmingStep;
- (BOOL)initializeHID;
- (BOOL)registerDisplayStateUpdateCallbackWithBlock:(id /* block */)a0;
- (BOOL)registerHarmonyStateUpdateCallbackWithBlock:(id /* block */)a0;
- (BOOL)setBurninCounterValue:(unsigned long long)a0;
- (BOOL)setServiceProperty:(id)a0 forKey:(id)a1;
- (BOOL)turnOffWithPeriod:(float)a0;
- (BOOL)turnOn;
- (BOOL)turnOnWithPeriod:(float)a0;
- (void)unregisterDisplayStateUpdateCallback;
- (void)unregisterHarmonyStateUpdateCallback;
- (BOOL)updateState:(int)a0 withPeriod:(float)a1;

@end
