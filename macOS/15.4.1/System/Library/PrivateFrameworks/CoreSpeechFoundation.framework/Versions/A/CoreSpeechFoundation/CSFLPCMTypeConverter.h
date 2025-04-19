@interface CSFLPCMTypeConverter : NSObject

+ (void)applyNegative20dBGainToFloatBuffer:(id)a0;
+ (void)applyNegative20dBGainToShortBuffer:(id)a0;
+ (void)applyNegative32dBGainToFloatBuffer:(id)a0;
+ (void)applyNegative32dBGainToShortBuffer:(id)a0;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)a0;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (void)apply12dBGainToFloatBuffer:(id)a0;
+ (void)apply12dBGainToShortBuffer:(id)a0;
+ (void)applyGain:(float)a0 toFloatBuffer:(id)a1;
+ (void)applyGain:(float)a0 toShortBuffer:(id)a1;

@end
