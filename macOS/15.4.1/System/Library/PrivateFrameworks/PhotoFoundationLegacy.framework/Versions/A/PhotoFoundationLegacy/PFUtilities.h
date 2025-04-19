@interface PFUtilities : NSObject

+ (BOOL)runningUnderDebugger;
+ (BOOL)didStopInDebugger;
+ (void)getSystemVersionMajor:(unsigned int *)a0 systemVersionMinor:(unsigned int *)a1 systemVersionBugFixRev:(unsigned int *)a2;
+ (BOOL)hasEnabledManagedUserDefault:(id)a0;
+ (BOOL)hasInternalPhotosDiagnosticsCapability;
+ (BOOL)isOnACPower:(double *)a0;

@end
