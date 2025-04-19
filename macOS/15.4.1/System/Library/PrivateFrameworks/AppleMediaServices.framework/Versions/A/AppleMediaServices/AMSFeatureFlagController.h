@interface AMSFeatureFlagController : NSObject

+ (BOOL)_ffctlWithFlags:(id)a0 enabled:(BOOL)a1;
+ (id)_generateScriptForFlags:(id)a0 enabled:(BOOL)a1;
+ (BOOL)toggleFlags:(id)a0 enabled:(BOOL)a1;
+ (void)verifyFlags;

@end
