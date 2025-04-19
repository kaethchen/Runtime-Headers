@interface CVAMotionTrackingExpressionConfiguration_Exclave : NSObject

@property (nonatomic) struct { unsigned long long raiseEyebrows; unsigned long long openMouth; unsigned long long smile; unsigned long long tongueOut; unsigned long long eyeBlink; unsigned long long noseSneer; unsigned long long mouthPuckerCenter; unsigned long long puckerLipsLeft; unsigned long long puckerLipsRight; } previousExpressions;

+ (id)_facialExpressionToActivationToValueMapping;
+ (BOOL)_jawOpenStartingWithValue:(float)a0 mouthClose:(float)a1 forActivation:(unsigned long long)a2;
+ (float)_minConfidenceExpressionStarted:(unsigned long long)a0 forActivation:(unsigned long long)a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })_emptyAccessibilityExpressions;

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })processIncomingExpressions:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; })a0;

@end
