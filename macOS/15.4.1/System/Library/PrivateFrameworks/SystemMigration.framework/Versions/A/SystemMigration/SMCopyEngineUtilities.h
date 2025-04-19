@interface SMCopyEngineUtilities : NSObject

+ (void)initialize;
+ (void)ensureParentPathExists:(id)a0;
+ (void)ensureParentPathExists:(id)a0 matchingPermissionsOfPath:(id)a1;
+ (BOOL)shouldIgnoreErrorFile:(id)a0;

@end
