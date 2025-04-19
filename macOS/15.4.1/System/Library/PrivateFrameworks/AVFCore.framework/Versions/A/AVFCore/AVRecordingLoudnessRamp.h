@interface AVRecordingLoudnessRamp : AVScheduledFloatValueRamp

+ (float)boundsAdjustedFloatValue:(float)a0;
+ (float)defaultFloatValue;
+ (id)recordingLoudnessRampWithStartValue:(float)a0 endValue:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;

@end
