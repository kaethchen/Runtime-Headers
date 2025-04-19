@interface EXXPCUtil : NSObject

+ (id)sharedInstance;
+ (int)addExternalServiceForPid:(int)a0 path:(id)a1 overlay:(id)a2;
+ (void)assertIsExtensionProcess;
+ (void)checkInWithLaunchd;
+ (int)servicePidFromXPCConnection:(id)a0;

@end
