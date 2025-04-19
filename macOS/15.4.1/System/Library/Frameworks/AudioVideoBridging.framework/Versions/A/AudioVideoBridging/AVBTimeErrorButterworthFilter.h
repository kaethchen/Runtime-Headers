@interface AVBTimeErrorButterworthFilter : AVBTimeErrorBiquadFilter

+ (id)highPassFilterWithOrder:(int)a0 cornerFrequency:(double)a1 samplingFrequency:(double)a2;
+ (id)lowPassFilterWithOrder:(int)a0 cornerFrequency:(double)a1 samplingFrequency:(double)a2;

@end
