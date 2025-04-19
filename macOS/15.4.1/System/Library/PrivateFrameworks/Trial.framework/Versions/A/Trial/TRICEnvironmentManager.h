@interface TRICEnvironmentManager : NSObject

+ (int)checkDeviceUnlocked;
+ (int)checkIfConnectedToVPN:(BOOL *)a0;
+ (long long)currentEnv;
+ (id)envToString:(long long)a0;
+ (const struct passwd { char *x0; char *x1; unsigned int x2; unsigned int x3; long long x4; char *x5; char *x6; char *x7; char *x8; long long x9; } *)getLoginPasswd;
+ (int)resetDaemonProcess;
+ (id)trialDaemonUserName;
+ (BOOL)validateTrialPath:(id)a0 requireUserPath:(BOOL)a1;

@end
