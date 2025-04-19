@interface SiriTTSNeuralUtils : NSObject

+ (BOOL)hasANE;
+ (BOOL)compileANEModel:(id)a0 error:(id *)a1;
+ (float)currentSampleRate:(id)a0;
+ (BOOL)hasAMX;
+ (BOOL)isANEModelCompiled:(id)a0;
+ (BOOL)isANEOnly;
+ (BOOL)isH12Platform;
+ (BOOL)isNaturalPlatform;
+ (BOOL)isNeuralPlatform;
+ (BOOL)isNeuralVoiceReady:(id)a0;
+ (BOOL)shouldUseNeuralVoice:(id)a0;

@end
