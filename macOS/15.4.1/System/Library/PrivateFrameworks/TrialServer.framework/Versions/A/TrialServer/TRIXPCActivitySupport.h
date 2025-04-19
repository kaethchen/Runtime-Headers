@interface TRIXPCActivitySupport : NSObject

+ (id)_registeredActivities;
+ (void)assertRegistrationOfLaunchdPlistActivities:(id)a0;
+ (id)nameForActivityState:(long long)a0;
+ (void)registerActivityWithLaunchDaemonDescriptor:(id)a0 checkInBlock:(id /* block */)a1 asyncHandler:(id /* block */)a2;
+ (BOOL)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)a0;

@end
