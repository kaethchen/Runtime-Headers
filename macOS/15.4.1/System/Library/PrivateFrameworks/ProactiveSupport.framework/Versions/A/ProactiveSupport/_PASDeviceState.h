@interface _PASDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (int)lockState;
+ (BOOL)isClassCLocked;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (id)currentOsBuild;
+ (BOOL)isDeviceFormattedForProtection;
+ (void *)registerForAKSEventsNotifications:(id /* block */)a0;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (void)setDefaultSystemCallbacks;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *)a0;
+ (void)unregisterForAKSEventsNotifications:(void *)a0;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;

@end
