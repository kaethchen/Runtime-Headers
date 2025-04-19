@interface TypistKeyboardUtilities : NSObject

+ (void)waitFor:(double)a0;
+ (id)canonicalConversion:(id)a0;
+ (id)convertRecapCommands:(id)a0;
+ (id)convertRecapCommandsFromListOfActions:(id)a0;
+ (struct CGPoint { double x0; double x1; })generateGaussianPoint:(struct CGPoint { double x0; double x1; })a0 withSeed:(long long)a1 andSigma:(double)a2;
+ (struct CGPoint { double x0; double x1; })generateGaussianPointWithMean:(struct CGPoint { double x0; double x1; })a0 andSigma:(double)a1;
+ (struct CGPoint { double x0; double x1; })generateUniformPointWithMean:(struct CGPoint { double x0; double x1; })a0 andBounds:(struct CGVector { double x0; double x1; })a1;
+ (struct CGPoint { double x0; double x1; })generateUniformPointWithMean:(struct CGPoint { double x0; double x1; })a0 andRange:(unsigned int)a1;
+ (id)getRegionCodeFromKeyboardID:(id)a0;
+ (void)launchRecap:(id)a0;
+ (void)launchRecap:(id)a0 completion:(id /* block */)a1;
+ (void)launchRecapWithSyntheticEventStream:(id)a0;
+ (void)logToFile:(BOOL)a0;
+ (void)logToSTDERR:(BOOL)a0;
+ (void)runOnMainThread:(id /* block */)a0;
+ (void)setRecapFastMode:(BOOL)a0;
+ (void)setTapTouchRadius:(id)a0;
+ (id)sharedRecapInlinePlayer;
+ (void)tearDownRecapInlinePlayer;
+ (id)timeInStringFromTimeInterval:(double)a0;
+ (id)validateProbability:(id)a0;

@end
