@interface PTTuningParameters : NSObject

+ (int)hwModelIDFromFigModelSpecificName:(id)a0;
+ (id)hwModelIDToString:(int)a0;
+ (float)noiseScaleFactorForHwModelID:(int)a0 sensorID:(int)a1;

@end
