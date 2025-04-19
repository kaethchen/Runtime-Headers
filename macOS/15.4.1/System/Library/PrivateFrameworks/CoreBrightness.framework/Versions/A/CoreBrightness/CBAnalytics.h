@interface CBAnalytics : NSObject

+ (void)nightShiftSunSchedulePermitted:(BOOL)a0;
+ (void)send:(id)a0 withBlock:(id /* block */)a1;
+ (void)aliasingMitigationsCount:(unsigned long long)a0;
+ (void)alsOcclusionsByProx:(long long)a0 andByTouch:(long long)a1 touchProx:(long long)a2 none:(long long)a3;
+ (void)alsSelectionDeltas:(const double *)a0 count:(unsigned long long)a1;
+ (void)alsSelectionSwaps:(unsigned long long)a0;
+ (void)alsSelectionTimes:(const double *)a0 count:(unsigned long long)a1;
+ (void)autoBrightnessEnabled:(BOOL)a0 byUser:(BOOL)a1;
+ (void)autoBrightnessUserChange:(BOOL)a0 lowPower:(BOOL)a1;
+ (void)autoDimLeave:(double)a0;
+ (void)cltmBudgetUpdated:(float)a0 currentSDRBrightness:(float)a1;
+ (void)curveLevel:(long long)a0;
+ (void)harmonyColor:(const struct ColorReport { struct { double x0[17]; int x1[17]; int x2; unsigned long long x3; } x0; struct { double x0[17]; int x1[17]; int x2; unsigned long long x3; } x1; struct { double x0[46]; int x1; unsigned long long x2; } x2; struct BlueReductionReport { double x0; double x1; double x2; BOOL x3; float x4; } x3; struct { double x0[10]; int x1; double x2; } x4; struct { double x0; double x1; double x2; double x3; float x4; float x5; } x5; int x6; } *)a0;
+ (void)harmonyEnabled:(BOOL)a0 byUser:(BOOL)a1;
+ (void)hdrSession:(BOOL)a0;
+ (void)illuminanceHistogram:(id)a0;
+ (void)luminanceHistogram:(id)a0 withName:(id)a1;
+ (void)nightShiftCCT:(long long)a0;
+ (void)nightShiftEnabled:(BOOL)a0 withOption:(int)a1;
+ (void)rtplcTriggeredWithLength:(unsigned long long)a0 maxAPCE:(float)a1 durationInSeconds:(float)a2 sdrBrightness:(float)a3 referenceModeEnabled:(BOOL)a4;
+ (void)sbimMitigationTriggeredWithBrightness:(float)a0;
+ (void)sendBool:(id)a0 withField:(const char *)a1 andValue:(BOOL)a2;
+ (void)sendInt:(id)a0 withField:(const char *)a1 andValue:(long long)a2;
+ (void)sendSparseBins:(const double *)a0 count:(long long)a1 withName:(id)a2;
+ (void)touchOcclusionElapsedDelay:(float)a0;
+ (void)userBrightnessChangeAfterSnapping:(float)a0;
+ (void)userSliderCommit:(const struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x14; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x15; BOOL x16; int x17; float x18; float x19; long long x20; float x21; long long x22; BOOL x23; BOOL x24; BOOL x25; float x26; float x27; float x28; int x29; BOOL x30; BOOL x31; } *)a0;

@end
