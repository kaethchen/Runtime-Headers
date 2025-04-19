@class CBDisplayModuleMacOS, NSString, DisplayALSManager;

@interface CBABModuleMacBuiltIn : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    id /* block */ _notificationBlock;
    DisplayALSManager *_displayALSManager;
}

@property (readonly) CBDisplayModuleMacOS *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (BOOL)handleAutoBrightnessEnabledProperty:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)initWithMacDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)newService:(struct __IOHIDServiceClient { } *)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)unregisterNotificationBlock;

@end
